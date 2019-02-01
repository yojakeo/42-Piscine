/* Char No Input */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Fuction Prototype;*/

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc >= 0)
		ft_putchar(/*Function()*/);
	ft_putchar('\n');
	return (0);
}