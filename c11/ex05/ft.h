#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putnbr(int nb);
void	do_operat(int a, int b, int (*oper)(int, int));
void	do_op(char **argv);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		plus(int a, int b);
int		minus(int a, int b);
int		mult(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);

#endif