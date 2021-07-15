#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	nbr[] = "6234346";
	char	base[] = "0123456789ABCDEF";
	int		n;

	n = ft_atoi_base(nbr, base);
	printf("n = %d", n);
}