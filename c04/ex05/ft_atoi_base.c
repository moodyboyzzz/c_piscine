/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:38:04 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/29 22:21:41 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_number_size (char end, char *base, int len)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (base[i])
	{
		if (base [i] != end)
			i++;
		else
			n = base[i] - base[0];
	}
}

int	ft_len (int size, int n)
{
	size--;
	while (size >= 0)
	{
		n = n * n;
		size--;
	}
	return (n);
}

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
			|| base[i] == 45 || base[i] == 43 || base[i] == '\t'
			|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == ' ')
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

int ft_atoi_base(char *str, char *base)
{
	int		number;
	int		f;
	int		len;
	char	*end;
	int		i;
	int		j;
	int		g;
	int		n;
	int		t;
	int		size;

	f = 1;
	number = 0;
	j = 0;
	n = 0;
	i = 0;
	t = 0;
	len = ft_check_base(base);
	while ((*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r') || (*str == ' '))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			f = -1 * f;
		str++;
	}
	while (*str)
	{
		while (*str != base[j])
		{
			if (base[j] == '\0' && size < 2)
				return (number);
			if (base[j] == '\0' && size >= 2)
				break ;
			j++;
		}
		str++;
		size++;
		j = 0;
	}
	str--;
	end = *str;
	while (size >= 0)
	{
		if (f < 0)
		{
			n = ft_number_size(end, base, len);
			t++;
			number = number - (base[start] - base[0]) * ft_len(n, size);
		}
		else
			number = number + (base[start] - base[0]) *ft_len(n, size);
		size--;
		start++;
	}
	return (number);
}
