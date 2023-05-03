/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:21:19 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/03 20:46:51 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	nbr;
	int	tmp;

	nbr = argc - 1;
	tmp = 0;
	while (nbr >= 10)
	{
		tmp = nbr % 10 + '0';
		write(1, &tmp, 1);
		nbr = nbr / 10;
	}
	nbr = nbr + '0';
	write(1, &nbr, 1);
	write(1, "\n", 1);
}
