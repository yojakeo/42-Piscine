/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 18:19:22 by japarbs           #+#    #+#             */
/*   Updated: 2019/01/22 18:19:23 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *temp;

	if (!(temp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	temp->data = data;
	temp->next = NULL;
	return (temp);
}
