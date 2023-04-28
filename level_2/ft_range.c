/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:21:01 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 17:53:33 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*result;
	int	len;

	len = abs(end - start) + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (i < len)
		{
			result[i] = start;
			start ++;
			i ++;
		}
	}
	else
	{
		while (i < len)
		{
			result[i] = start;
			start --;
			i ++;
		}
	}
	return (result);
}
