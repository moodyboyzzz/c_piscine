#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	number;

	number = 0;
	while (begin_list)
	{
		number++;
		begin_list = begin_list->next;
	}
	return (number);
}
