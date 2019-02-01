/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 23:32:03 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/17 23:32:05 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *r;

	i = 0;
	if (min > max || !(r = (int *)malloc(sizeof(int) * (i + 1))))
		return (0);
	while (min <= max)
		r[i++] = min++;
	return (r);
}
