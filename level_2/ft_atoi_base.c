/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:48:49 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/29 10:48:58 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* work in progress */

/* 
01
012
0123
01234
012345
0123456
01234567
012345678
0123456789
0123456789a
0123456789ab
0123456789abc
0123456789abcd
0123456789abcde
0123456789abcdef
*/

#include <stdio.h>

int	ft_pow(int base, int power)
{
	int	base_i;

	base_i = base;
	if (power == 0)
		base = 1;
	while ((power - 1) > 0)
	{
		base *= base_i;
		power --;
	}
	return (base);
}

int	size_nbr(const char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size ++;
	return (size);
}

int	find_index(char c)
{
	int		index;
	char	*base_maj =  "0123456789ABCDEF";
	char	*base_min =  "0123456789abcdef";

	if ((c >= 'a' && c <= 'b') || (c >= '0' && c <= '9'))
	{
		while (base_min[index] != c)
			index ++;
		return (index);
	}
	else if (c >= 'a' && c <= 'b')
	{
		while (base_min[index] != c)
			index ++;
		return (index);
	}
	return (0);
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
	while (str[i])
	{
		result = result + find_index(str[i]) * ft_pow(str_base, size_nbr(str) - i); // - 1 ou pas?
		i ++;
	}
	return (sign * result);
}

/* 12FDB3 = (1 × 16⁵) + (2 × 16⁴) + (15 × 16³) + (13 × 16²) + (11 × 16¹) + (3 × 16⁰) = 1244595 */

int	main(int argc, char **argv)
{
	printf("%s en décimal = %d\n", argv[1], ft_atoi_base(argv[1], 16)); //segfault
}
