#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*str;

	i = 0;
	str = malloc(sizeof(int) * length);
	if (str == NULL)
		return (NULL);
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
