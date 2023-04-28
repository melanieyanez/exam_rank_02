/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:12:20 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 17:05:28 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i ++;
				argv[1][i] = argv[1][i] - 32;
			}
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
