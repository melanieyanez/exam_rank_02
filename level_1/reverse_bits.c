/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:04:54 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/18 12:06:16 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reversed;
	int				i;

	i = 0;
	reversed = 0;
	while (i < 8)
	{
		reversed = (reversed << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (reversed);
}
