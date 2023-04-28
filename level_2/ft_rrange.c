/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:52:02 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 17:53:25 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	*result;
	int	len;

	len = abs(start - end) + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	i = 0;
	if (end < start)
	{
		while (i < len)
		{
			result[i] = end;
			end ++;
			i ++;
		}
	}
	else
	{
		while (i < len)
		{
			result[i] = end;
			end --;
			i ++;
		}
	}
	return (result);
}
