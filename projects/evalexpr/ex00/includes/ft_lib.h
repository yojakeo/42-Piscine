/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 00:10:51 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/26 00:10:53 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*rm_white_space(char *str);
int		ft_putnbr(int nb);
int		eval_expr(char *str);
int		parsefactor();
int		parseproduct();
int		parsesum();

#endif