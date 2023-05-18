/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:00:07 by myanez-p          #+#    #+#             */
/*   Updated: 2023/05/16 18:34:35 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	space;

	if (argc >= 2)
	{
		i = 0;
		space = 0;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i ++;
		start = i;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i ++;
		end = i;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i ++;
		while (argv[1][i])
		{
			while ((argv[1][i] == ' ' || argv[1][i] == '\t')
			&& (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'
			|| argv[1][i + 1] == '\0'))
				i ++;
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				space = 1;
			write(1, &argv[1][i], 1);
			i ++;
		}
		if (space == 1)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start ++;
		}		
	}
	write(1, "\n", 1);
}
