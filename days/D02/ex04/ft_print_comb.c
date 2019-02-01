/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:26:49 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/09 13:26:52 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char i;
	char j;
	char m;

	i = '0' - 1;
	while (++i <= '7')
	{
		j = i;
		while (++j <= '8')
		{
			m = j;
			while (++m <= '9')
			{
				if (i != '0' || j != '1' || m != '2')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(m);
			}
		}
	}
}
