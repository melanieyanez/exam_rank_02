/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:35:24 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/04 16:43:04 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexa_number(unsigned int n)
{
	char	*base = "0123456789abcdef";

	if (n >= 16)
	{
		print_hexa_number(n / 16);
		write(1, &base[n % 16], 1);
	}
	else
		write(1, &base[n], 1);
}

int	ft_atoi(const char *str)
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
			sign = -1;
		i ++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		else
			return (sign * result);
		i ++;
	}
	return (sign * result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hexa_number(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
