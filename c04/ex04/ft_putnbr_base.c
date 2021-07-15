/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 21:37:11 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/29 18:05:46 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(base[0]) || !(base[1]))
		return (0);
	while (base[i])
	{
		if (!(base[i] >= 32 && base[i] <= 126)
			|| base[i] == 45 || base[i] == 43)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_convert(int len, int nbr, char *base, int f)
{
	int		i;
	char	t[32];

	i = 0;
	while ((nbr / len) >= 1 || (nbr / len) <= -1)
	{
		if (f == -1)
			t[i] = base[-1 * (nbr % len)];
		else
			t[i] = base[nbr % len];
		i++;
		nbr /= len;
	}
	if (f == -1)
		t[i] = base[-1 * (nbr % len)];
	else
		t[i] = base[nbr % len];
	while (i >= 0)
	{
		write(1, &t[i], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	f;

	f = 1;
	len = ft_check_base(base);
	if (len != 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			f = -1;
		}
		ft_convert(len, nbr, base, f);
	}
}
