/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:57:42 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/04 13:25:36 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n;

	n = 1;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n ++;
	}
}
