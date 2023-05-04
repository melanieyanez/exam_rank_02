/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:35:15 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/04 13:43:49 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	n;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	n = (nbr % 10) + '0';
	write(1, &n, 1);
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
	int	hcm;
	int	result;
	int	a;
	int	b;

	hcm = 1;
	result = 0;
	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		while (hcm <= a && hcm <= b)
		{
			if (a % hcm == 0 && b % hcm == 0)
				result = hcm;
			hcm ++;
		}
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}
