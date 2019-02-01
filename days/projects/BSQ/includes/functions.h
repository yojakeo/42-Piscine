/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:32:52 by gachan            #+#    #+#             */
/*   Updated: 2019/01/28 15:41:47 by gachan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_atoi(char **str);
char	*ft_strdup(char *src);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

#endif
