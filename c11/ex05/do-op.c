#include "ft.h"

void	do_operat(int a, int b, int (*oper)(int, int))
{
	ft_putnbr(oper(a, b));
	write(1, "\n", 1);
}

void	do_op(char **argv)
{
	if (*argv[2] == '+')
		do_operat(ft_atoi(argv[1]), ft_atoi(argv[3]), plus);
	else if (*argv[2] == '-')
		do_operat(ft_atoi(argv[1]), ft_atoi(argv[3]), minus);
	else if (*argv[2] == '*')
		do_operat(ft_atoi(argv[1]), ft_atoi(argv[3]), mult);
	else if (*argv[2] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return ;
		}
		do_operat(ft_atoi(argv[1]), ft_atoi(argv[3]), div);
	}
	else if (*argv[2] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
		do_operat(ft_atoi(argv[1]), ft_atoi(argv[3]), mod);
	}
}
