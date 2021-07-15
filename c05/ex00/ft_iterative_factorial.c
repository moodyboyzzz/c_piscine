/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:38:07 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/30 08:16:22 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		number = number * i;
		i++;
	}
	return (number);
}
