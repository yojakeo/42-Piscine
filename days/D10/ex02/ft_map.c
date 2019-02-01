/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 23:42:57 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/21 23:42:59 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	i = -1;
	if (!(res = (int *)malloc(sizeof(int) * (length + 1))))
		return (0);
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}
