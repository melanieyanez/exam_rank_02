/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:14:21 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/18 12:19:23 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		(*f)(tmp->data);
		tmp = tmp->next;
	}		
}
