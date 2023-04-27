/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:07:20 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 15:52:27 by melanieyane      ###   ########.fr       */
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
			if (argv[1][i] == '\0')
			{
				i = 0;
				while (argv[1][i])
				{
					write(1, &argv[1][i], 1);
					i ++;
				}
			}
			else
				break ;
		}
	}
	write(1, "\n", 1);
}
