/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:23:04 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 19:41:24 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
					i ++;
				j ++;
			}
			if (argv[2][j] == '\0')
				break ;
		}
		if (argv[2][j] == '\0' && argv[1][i] != '\0')
			write(1, "0", 1);
		if (argv[1][i] == '\0')
			write(1, "1", 1);
	}
	write(1, "\n", 1);
}
