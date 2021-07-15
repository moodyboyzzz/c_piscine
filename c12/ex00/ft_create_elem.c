#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*t;

	t = malloc(sizeof(t_list));
	if (t == NULL)
		return (NULL);
	t->data = data;
	t->next = NULL;
	return (t);
}
