/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:28:47 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 17:14:02 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* not tested */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	size;
	int	tmp;

	i = 0;
	size = 0;
	while (str[size])
		size ++;
	while (i <= (size - 1) / 2)
	{
		tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
		i ++;
	}
	return (str);
}
