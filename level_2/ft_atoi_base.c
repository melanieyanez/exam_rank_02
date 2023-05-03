/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:48:49 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/03 20:47:09 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	find_index(char c, int base)
{
	int		index;
	char	*base_maj =  "0123456789ABCDEF";
	char	*base_min =  "0123456789abcdef";

	index = 0;
	if (base < 2 || base >= 17)
		return (-1);
	while (index < base)
	{
		if (c == base_maj[index] || c == base_min[index])
			return (index);
		index ++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i ++;
	}
	while (find_index(str[i], str_base) != -1 && i < 8)
	{
		result = result * str_base;
		result = result + find_index(str[i], str_base);
		i ++;
	}
	return (sign * result);
}

/* 12FDB3 = (1 × 16⁵) + (2 × 16⁴) + (15 × 16³) + (13 × 16²) + (11 × 16¹) + (3 × 16⁰) = 1244595 */

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s en base %s = %d en décimal\n", argv[1], argv[2], ft_atoi_base(argv[1], atoi(argv[2])));
	return (0);
}
*/