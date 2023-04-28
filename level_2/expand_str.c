/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:44:36 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 19:49:39 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '	'))
			i ++;
		while (argv[1][i])
		{
			while ((argv[1][i] == ' ' || argv[1][i] == '\t')
				&& (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'))
				i ++;
			if ((argv[1][i] == ' ' || argv[1][i] == '\t')
				&& (argv[1][i + 1] == '\0'))
				break ;
			else if ((argv[1][i] == ' ' || argv[1][i] == '\t')
				&& !(argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'))
			{
				write(1, " ", 1);
				write(1, " ", 1);
				write(1, " ", 1);
				i ++;
			}
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
