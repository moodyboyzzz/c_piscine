#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*t;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (malloc(sizeof(char) * (len + 1)) == NULL)
		return (NULL);
	t = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*string;

	i = 0;
	string = malloc(sizeof(t_stock_str) * (ac + 1));
	if (string == NULL)
		return (NULL);
	while (i < ac)
	{
		string[i].size = ft_strlen(av[i]);
		string[i].str = av[i];
		string[i].copy = ft_strdup(av[i]);
		i++;
	}
	string[i].str = NULL;
	return (string);
}
