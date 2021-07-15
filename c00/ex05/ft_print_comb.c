/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:36:16 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/24 18:36:18 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_probels(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = 48;
	while (a[0] <= '7')
	{
		a[1] = '0';
		while (a[1] <= '8')
		{
			a[2] = '0';
			while (a[2] <= '9')
			{
				if ((a[0] < a[1]) && (a[1] < a[2]))
				{
					ft_putchar(a[0]);
					ft_putchar(a[1]);
					ft_putchar(a[2]);
					if (!(a[0] == '7' && a[1] == '8' && a[2] == '9'))
						ft_probels();
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
