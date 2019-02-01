/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 23:55:21 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/11 23:55:25 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void sastantua(int size)
{
	if (size == 0)
		return(0);
	pyramid_base(size);
}

void	put_line(int x, char left, char mid, char right)
{
	int i;

	i = 2;
	ft_putchar(left);
	while (!(i >= x))
	{
		ft_putchar(mid);
		i++;
	}
	if (x >= 2)
		ft_putchar(right);
	ft_putchar('\n');
}

void pyramid(int stack, int size, int height, int base)
{
	int space;
	int i;
	int spacei;

	space = ((base / 2) - 1);
	spacei = space
	{
		
	};
	i = 0;
	while (stack != size)
	{
		while (i <= height)
		{
			if (spacei <= space)
			{
				ft_putchar(' ');
				space--;
			}
			else if (height ==)
		}
	}
}
/* Pre Calculations For Pyramid */
int pyramid_pre_calc(int size, int type)
{
	int height;
	int base;
	int i;

	i = size
	while (i != 1)
		height = height + (2 + i--);
	if (type == 0)
		return (height);
	i = height
	while (i != 1)
	{
		base = size + ((height - 1) * 2);
	}
	return (base);
}

void pyramid_base(int size)
{
	int currentStack;
	int	height;
	int base;

	currentStack = 1;
	height = pyramid_pre_calc(size, 0)
	base = pyramid_pre_calc(size, 1)
	while (!(size == currentStack))
	{
		pyramid(currentStack, size, height, base);
		currentStack++;
	}
	door(size);
}

void door(int base_size)
{

}
