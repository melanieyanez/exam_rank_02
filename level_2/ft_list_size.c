/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:40:46 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/29 09:46:36 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 1;
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		size ++;
	}
	return (size);
}
