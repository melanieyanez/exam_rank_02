/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:13:01 by myanez-p          #+#    #+#             */
/*   Updated: 2023/04/27 19:39:08 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '	')
			i ++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '	')
		{
			write (1, &argv[1][i], 1);
			i ++;
		}
	}
	write(1, "\n", 1);
}
