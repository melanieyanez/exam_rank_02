/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:57:02 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/18 10:16:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*begin_list;

	begin_list = lst;
	while (begin_list->next != NULL)
	{
		if ((*cmp)(begin_list->data, begin_list->next->data) == 0)
		{
			tmp = begin_list->data;
			begin_list->data = begin_list->next->data;
			begin_list->next->data = tmp;
			begin_list = lst;
		}
		else
			begin_list = begin_list->next;
	}
	return (lst);
}
