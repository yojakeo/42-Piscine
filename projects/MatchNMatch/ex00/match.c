/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 14:19:18 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/19 14:19:20 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (!*s1 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 == *s2 && *s2 && *s1)
		return (match(s1 + 1, s2 + 1));
	if (!*s1 && !*s2)
		return (1);
	return (0);
}
