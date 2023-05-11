/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:53:38 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/11 13:18:51 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	ignored;

	if (argc > 1)
	{
		start = 0;
		i = 0;
		ignored = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			//ignored = 1;
			i++;
		}
		while ((argv[1][i] >= 'a' && argv[1][i] <= 'z')
		|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			//ignored = 1;
			i ++;
		}
		while ((argv[1][i] == ' ' || argv[1][i] == '\t')
		&& (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'))
			i ++;
		start = i + 1;
		while (argv[1][start])
		{
			while ((argv[1][start] == ' ' || argv[1][start] == '\t')
			&& (argv[1][start + 1] == ' ' || argv[1][start + 1] == '\t'))
				start ++;
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				ignored = 1;
			write(1, &argv[1][start], 1);
			start ++;
		}
		//if (ignored == 1)
		//{
			i = 0;
			if (ignored == 1)
				write(1, " ", 1);
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while ((argv[1][i] >= 'a' && argv[1][i] <= 'z')
			|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				write(1, &argv[1][i], 1);
				i ++;
			}
		//}
	}
	write(1, "\n", 1);
}
