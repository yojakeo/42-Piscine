/* Full Utility Main */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Fuction Prototype;*/

void	ft_putnbr(int nb)
{
	if (nb >= 2147483647)
	{
		ft_putchar('2');
		ft_putnbr(147483647);
	}
	else if (nb <= -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int		ft_atoi(char *str)
{
	int i;
	int s;
	int nbr;

	s = 1;
	i = 0;
	nbr = 0;
	if (!str[i])
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * s);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	if (argc => 0)
	{
		i = ft_atoi(argv[1]);
		j = ft_atoi(argv[2]);
		ft_/*Output_Type*/(/*Function()*/);
	}
	ft_putchar('\n');
	return (0);
}