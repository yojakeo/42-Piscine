/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 22:37:55 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/15 22:37:56 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = -1;
	if (!str)
		return (1);
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	}
	return (1);
}