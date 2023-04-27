/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:24:07 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 15:45:10 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i ++;
	}
	return (max);
}
