/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_manipulation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:37:40 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/28 20:37:41 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define BUFF [4096]

char	**read_map_file(int fd)
{
	char *tmp;
	int i;

	i = 0;
	while(read(fd, BUFF + 1, 4096))
	{
		
	}
}

void	ft_read_file(char *str)
{
	int fd;

	if (ft_strcmp(str[0], ".") == 0 || ft_strcmp(str[0], "/") == 0 ||
	ft_strcmp(str[0], "..") == 0 || ft_strcmp(str[0], "./") == 0 ||
	ft_strcmp(str[0], "../") == 0)
	{
		ft_putstr(str);
		ft_putstr(": Is a directory.\n");
		return ;
	}
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(str);
		ft_putstr("File does not exist.\n");
		return ;
	}
	read_map_file(fd);
	close(fd);
}
