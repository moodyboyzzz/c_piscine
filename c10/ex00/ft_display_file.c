#include	<unistd.h>
#include 	<fcntl.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	ft_display_file(char *file)
{
	int		fo;
	int		fr;
	char	buf[4097];

	fo = open(file, O_RDONLY);
	if (fo < 0)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	fr = read(fo, &buf, 4096);
	while (fr)
	{
		buf[fr] = '\0';
		ft_putstr(buf);
		fr = read(fo, &buf, 4096);
	}
	close (fo);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
		ft_display_file(argv[1]);
	return (0);
}
