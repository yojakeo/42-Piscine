/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 22:34:20 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/15 22:34:21 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;

	i = -1;
	if (!str)
		return (1);
	while (str[++i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	return (1);
}
