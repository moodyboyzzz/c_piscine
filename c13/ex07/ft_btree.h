#ifndef FT_BTREE_H
# define FT_BTREE_H

# define MAX(a,b) ((a > b) ? a : b)

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

#endif