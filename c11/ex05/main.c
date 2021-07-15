#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) == 1 && (*argv[2] == '+' || *argv[2] == '-'
			|| *argv[2] == '*' || *argv[2] == '/' || *argv[2] == '%'))
		do_op(argv);
	else
		ft_putstr("0\n");
	return (0);
}
