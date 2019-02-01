/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:35:46 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/11 15:35:47 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13 || nb < 0)
		return (0);
	else if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
	return (0);
}
