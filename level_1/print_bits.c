/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:46:05 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 16:16:20 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	char	bit[9];

	i = 7;
	while (i >= 0)
	{
		while (octet)
		{
			if (octet % 2 == 0)
				bit[i] = '0';
			else
				bit[i] = '1';
			octet = octet / 2;
			i --;
		}
		bit[i] = '0';
		i --;
	}
	bit[8] = '\0';
	i = 0;
	while (bit[i])
	{
		write(1, &bit[i], 1);
		i ++;
	}
}

	
	