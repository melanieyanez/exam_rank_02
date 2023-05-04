/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:53:10 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/04 13:33:05 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nbr)
{
	char	n;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	n = (nbr % 10) + '0';
	write(1, &n, 1);
}

int	ft_is_prime(int nbr)
{
	int	n;

	n = nbr - 1;
	if (n <= 0)
		return (0);
	while (n > 1)
	{
		if (nbr % n == 0)
			return (0);
		n --;
	}
	return (1);
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
	int	sum;
	int	nbr;

	sum = 0;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr)
		{
			if (ft_is_prime(nbr) == 1)
				sum = sum + nbr;
			nbr --;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
