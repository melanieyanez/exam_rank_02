/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:19:13 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 16:42:15 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	number;

	number = 1;
	while (number <= n)
	{
		if (number == n)
			return (1);
		number = number * 2;
	}
	return (0);
}
