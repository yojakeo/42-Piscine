/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:31:51 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/12 22:31:53 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int op;

	i = 0;
	while (!(i++ > nb))
	{
		op = i * i;
		if (nb == op)
			return (i);
	}
	return (0);
}
