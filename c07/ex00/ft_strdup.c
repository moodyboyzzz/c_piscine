/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:23:27 by ctommy            #+#    #+#             */
/*   Updated: 2021/07/02 20:57:34 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
