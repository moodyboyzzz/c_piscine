int	ft_atoi(char *str)
{
	int	number;
	int	f;

	f = 1;
	number = 0;
	while ((*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r') || (*str == ' '))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			f = -1 * f;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (f < 0)
			number = number * 10 - (*str - '0');
		else
			number = number * 10 + (*str - '0');
		str++;
	}
	return (number);
}
