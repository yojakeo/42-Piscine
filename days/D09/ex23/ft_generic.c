/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:56:21 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/18 16:56:22 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Char No Input */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void);

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc >= 0)
		ft_generic();
	ft_putchar('\n');
	return (0);
}

void	ft_generic(void)
{
	char	*str;
	int		i;

	str = "Tut tut ; Tut tut\n";
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}
