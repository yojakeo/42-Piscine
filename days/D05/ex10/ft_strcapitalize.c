/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 23:10:08 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/15 23:10:10 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (i == 0 || !ft_isalpha(str[i - 1]))
		{
			if (str[i] >= 'a' && 'z' >= str[i])
				str[i] -= ' ';
		}
		else if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += ' ';
	}
	return (str);
}
