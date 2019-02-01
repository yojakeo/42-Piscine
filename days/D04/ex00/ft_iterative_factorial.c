/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:00:38 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/11 13:00:39 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int op;

	i = 0;
	op = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	while (i++ < nb)
		op *= i;
	return (op);
}
