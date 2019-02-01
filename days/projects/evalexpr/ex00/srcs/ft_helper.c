/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 23:27:54 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/27 23:27:58 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*rm_white_space(char *str)
{
	int i;
	int c;
	char *res;

	i = -1;
	c = 0;
	while (str[++i])
		if (str[i] == ' ')
			c++;
	if (!(res = (char *)malloc(sizeof(char) * ((i - c) + 1))))
	return (NULL);
	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
			res[c++] = str[i++];
	}
	return (res);
}
