#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;
	t_list	*list_pointer;

	i = 0;
	list = ft_create_elem(strs[i]);
	i++;
	list_pointer = list;
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = list_pointer;
		list_pointer = list;
		i++;
	}
	return (list);
}
