/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:15:20 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/18 16:15:21 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[++i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		isspy(char *str)
{
	char *p;
	char *a;
	char *b;

	p = "president";
	a = "attack";
	b = "Bauer";
	if (ft_strcmp(str, p) == 0)
		return (0);
	if (ft_strcmp(str, a) == 0)
		return (0);
	if (ft_strcmp(str, b) == 0)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argc > ++i)
	{
		if (isspy(argv[i]) == 0)
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
	}
	ft_putstr("\n");
	return (0);
}
