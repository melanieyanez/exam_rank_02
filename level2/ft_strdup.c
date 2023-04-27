/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:36:40 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 15:54:07 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*result;

	while (src[size])
		size ++;
	result = malloc(sizeof(*src) * (size + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i ++;
	}
	result[i] = '\0';
	return (result);
}
