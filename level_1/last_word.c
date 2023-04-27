/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:32:51 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 15:54:46 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][end])
			end ++;
		end --;
		while (argv[1][end] == ' ' || argv[1][end] == '\t')
			end --;
		start = end;
		while (start >= 0 && (argv[1][start] != ' ' && argv[1][start] != '\t'))
			start --;
		start ++;
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start ++;
		}	
	}
	write(1, "\n", 1);
}
