/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:23:12 by ctommy            #+#    #+#             */
/*   Updated: 2021/07/02 21:43:42 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*p;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (malloc(sizeof(int) * (max - min)) == NULL)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
