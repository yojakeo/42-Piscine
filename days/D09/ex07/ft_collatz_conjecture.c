/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:03:37 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/18 15:03:38 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int i;

	i = 0;
	if (base % 2)
	{
		base = (base * 3) + 1;
		i++;
	}
	else
		base /= 2;
	if (base > 1)
		i = ft_collatz_conjecture(base);
	return (i + 1);
}
