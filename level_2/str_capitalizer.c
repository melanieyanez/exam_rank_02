/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:54:54 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 20:22:32 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
					argv[i][j] = argv[i][j] - 32;
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z')
					&& (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t'))
					argv[i][j] = argv[i][j] - 32;
				else if ((argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				&& ((argv[i][j - 1] >= 'a' && argv[i][j - 1] <= 'z')
				|| (argv[i][j - 1] >= 'A' && argv[i][j - 1] <= 'Z')))
					argv[i][j] = argv[i][j] + 32;
				write(1, &argv[i][j], 1);
				j ++;
			}
			i ++;
			if (i < argc)
				write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
}
