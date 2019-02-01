/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 14:31:38 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/10 14:31:41 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	char	copy[128];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	if (str[i] == '\0')
		i--;
	while (copy[i] != '\0')
	{
		str[j] = copy[i];
		j++;
		i--;
	}
	return (*&str);
}
