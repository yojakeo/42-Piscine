/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 02:05:19 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/22 02:05:21 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

int		operation(int nb1, char op, int nb2)
{
	if (op == '*')
		return (nb2 * nb1);
	if (op == '/')
		return (nb1 / nb2);
	if (op == '%')
		return (nb1 % nb2);
	if (op == '+')
		return (nb1 + nb2);
	if (op == '-')
		return (nb1 - nb2);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%'
			|| argv[2][0] == '+' || argv[2][0] == '-'))
		{
			write(1, "0\n", 2);
			return (0);
		}
		if (argv[3][0] == '0' && argv[2][0] == '/')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (argv[3][0] == '0' && argv[2][0] == '%')
		{
			write(1, "Stop : modulo by zero\n", 23);
			return (0);
		}
		ft_putnbr(operation(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3])));
		write(1, "\n", 1);
	}
	return (0);
}
