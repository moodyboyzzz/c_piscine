#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = NULL;
		tree->right = NULL;
		tree->item = item;
	}
	return (tree);
}
