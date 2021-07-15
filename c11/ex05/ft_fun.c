#include "ft.h"

void	ft_putnbr(int nb)
{
	char	g;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		g = '0' + nb;
		write(1, &g, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_atoi(char *str)
{
	int	number;
	int	f;

	f = 1;
	number = 0;
	while ((*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r') || (*str == ' '))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			f = -1 * f;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (f < 0)
			number = number * 10 - (*str - '0');
		else
			number = number * 10 + (*str - '0');
		str++;
	}
	return (number);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
