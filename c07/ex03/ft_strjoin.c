#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcopy(char *str, char *p)
{
	while (*str)
	{
		*p = *str;
		str++;
		p++;
	}
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_len;
	int		sep_len;
	char	*t;
	char	*p;

	i = 0;
	strs_len = 0;
	if (size <= 0)
		return ("");
	sep_len = ft_strlen(sep) * (size - 1);
	if (i < size)
		strs_len += ft_strlen(strs[i++]);
	p = malloc(sizeof(char) * (strs_len + sep_len + 1));
	i = 0;
	t = p;
	while (i < size)
	{
		p = ft_strcopy(strs[i], p);
		if (i < size - 1)
			p = ft_strcopy(strs[i], p);
		i++;
	}
	*p = '\0';
	return (t);
}
