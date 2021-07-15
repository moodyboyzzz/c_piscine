#include "ft_stock_str.h"
#include <unistd.h>

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		while (*par[i].str)
		{
			write (1, par[i].str, 1);
			par[i].str++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		while (*par[i].copy)
		{
			write (1, par[i].copy, 1);
			par[i].copy++;
		}
		write(1, "\n", 1);
		i++;
	}
}
