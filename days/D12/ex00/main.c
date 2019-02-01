/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:19:33 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/24 16:19:34 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv);
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else if (argc < 2)
		ft_putstr("File name missing.");
	ft_putstr("\n");
	return (0);
}
