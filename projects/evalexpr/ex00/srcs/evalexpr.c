/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 22:46:32 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/27 22:46:35 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"
#define NUM(x)		(x >= '0' && x<= '9')

char *x;

int		parsefactor()
{
	int sum;

	if (NUM(*x))
		return (*x++ - '0');
	else if (*x == '(')
	{
		++x;
		sum = parsesum();
		++x;
		return (sum);
	}
	else
		ft_putstr("Invalid Number!!\n");
	return (0);
}

int		parseproduct()
{
	int fac1;
	int fac2;

	fac1 = parsefactor();
	while (*x == '*')
	{
		++x;
		fac2 = parsefactor();
		fac1 = fac1 * fac2;
	}
	return (fac1);
}

int		parsesum()
{
	int pro1;
	int pro2;

	pro1 = parseproduct();
	while (*x == '+')
	{
		++x;
		pro2 = parseproduct();
		pro1 = pro1 + pro2;
	}
	return (pro1);
}

int		eval_expr(char *str)
{
	int res;

	if (!*str)
		return (0);
	x = rm_white_space(str);
	res = parseproduct();
	return (res);
}
