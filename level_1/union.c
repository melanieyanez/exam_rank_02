/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:16:51 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 15:39:38 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_in_charset(char *str, char str_i, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == str_i)
			return (1);
		i ++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (is_in_charset(argv[1], argv[1][i], i) == 0)
				write(1, &argv[1][i], 1);
			i ++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (is_in_charset(argv[1], argv[2][j], i) == 0
				&& is_in_charset(argv[2], argv[2][j], j) == 0)
				write(1, &argv[2][j], 1);
			j ++;
		}
	}
	write(1, "\n", 1);
}
