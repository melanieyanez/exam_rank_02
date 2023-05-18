/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:59:31 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/15 16:16:19 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char *result;
	int	len;
	int	n;
	
	n = nbr;
	if (nbr < 0)
	{
		len ++;
		result[0] = '-';
		nbr = nbr * -1;
	}
	len = 1;
	while (n >= 10)
	{
		n = n / 10;
		len ++;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len)
	{
		len --;
		result[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (result);	
}
