#include "bsq.h"

int	costil_1(t_params	*par)
{
	int	i;

	i = 0;
	par->max = 0;
	par->max_i = 0;
	par->max_j = 0;
	if (!parse_map(par))
	{
		free(par);
		return (1);
	}
	display_bsq(par);
	while (par->tab[i] != NULL)
	{
		free (par->tab[i]);
		i++;
	}
	free (par);
	return (0);
}

void	costil_2(t_params *par, char *map, int	len_par)
{
	par->map = map + len_par + 1;
	par->columns = ft_strlen_nl(par->map);
}
