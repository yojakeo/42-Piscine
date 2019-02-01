/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 21:09:12 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/24 21:09:14 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <fcntl.h>
#include <unistd.h>

void	printfile(int fd)
{
	char buffer[4096];

	while (read(fd, buffer + 1, 4096))
		ft_putstr(buffer);
}

void	ft_display_file(char **argv)
{
	int fd;

	if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 ||
	ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 ||
	ft_strcmp(argv[1], "../") == 0)
	{
		ft_putstr(argv[1]);
		ft_putstr(": Is a directory.\n");
		return ;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(argv[1]);
		ft_putstr("File does not exist.\n");
		return ;
	}
	printfile(fd);
	close(fd);
}
