/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:57:17 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 17:13:54 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* not tested */

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

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (is_in_charset(s2, s1[i]) == 1)
			return ((char *)&s1[i]);
		i ++;
	}
	return (NULL);
}
