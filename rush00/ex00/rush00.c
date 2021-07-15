/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 17:48:44 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/27 17:54:58 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printr(char start, char middle, char end, int length)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i < length)
			ft_putchar(middle);
		else if (i == length)
			ft_putchar(end);
		if (i == 2147483647)
			break ;
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			printr('o', '-', 'o', x);
		else if (i < y)
			printr('|', ' ', '|', x);
		else if (i == y)
			printr('o', '-', 'o', x);
		ft_putchar('\n');
		if (i == 2147483647)
			break ;
		i++;
	}
}
