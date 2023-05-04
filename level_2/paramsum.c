/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:21:19 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/04 11:37:36 by melanieyane      ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	nbr;

	nbr = argc - 1;
	ft_putnbr(nbr);
	write(1, "\n", 1);
}
