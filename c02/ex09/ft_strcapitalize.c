/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 21:55:24 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/26 23:34:17 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha(char str)
{
	if (str >= 97 && str <= 122)
		return (0);
	if (str >= 65 && str <= 90)
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		t;
	int		k;
	char	*c;

	i = 0;
	if (*str && str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	c = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		t = ft_alpha(str[i]);
		if (t == 1)
			k = 1;
		if (k && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			k = 0;
		}
		i++;
	}
	return (c);
}
