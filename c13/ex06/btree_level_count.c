#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	if (root)
		return (1 + MAX(btree_level_count(root->left),
				btree_level_count(root->right)));
	return (0);
}
