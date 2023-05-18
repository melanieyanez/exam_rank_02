/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:18:38 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/18 10:35:19 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (argc == 2)
	{
		while (argv[1][i])
				i ++;
		while (i >= 0)
		{
			while (argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i --;
			end = i;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i --;
			start = i + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start ++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
