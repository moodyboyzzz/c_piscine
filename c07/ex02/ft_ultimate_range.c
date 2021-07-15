#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*p;
	int		count;

	i = 0;
	count = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (malloc(sizeof(int) * (max - min)) == NULL)
		return (-1);
	p = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (count);
}
