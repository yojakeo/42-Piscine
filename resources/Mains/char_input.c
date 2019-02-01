/* Char User Input */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

/*Fuction Prototype;*/

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(/*Function*/(argv[1]));
	ft_putchar('\n');
	return (0);
}