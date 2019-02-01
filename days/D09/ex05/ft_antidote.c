/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:37:33 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/18 14:37:34 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && k > i))
		return (i);
	if ((j > i && j < k) || (i < j && k > j))
		return (j);
	if ((k > j && k < i) || (k < j && i > k))
		return (k);
	else
		return (0);
}
