/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:18:45 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/27 22:16:08 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1)
	{
		if (*s1 == *s2)
			i = 1;
		else
		{
			i = 0;
			break ;
		}
		s1++;
		s2++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (*to_find)
		return ((void *)0);
	while (*str && *to_find)
	{
		if (*str == *to_find)
		{
			if (ft_strcmp(str, to_find))
				break ;
		}
		str++;
	}
	return (str);
}
