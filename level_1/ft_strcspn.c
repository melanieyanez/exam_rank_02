/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:42:42 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 15:56:43 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_in_charset(const char *str, char str_i)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == str_i)
			return (1);
		i ++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (is_in_charset(reject, s[i]) == 1)
			return (i);
		i ++;
	}
	return (i);
}
