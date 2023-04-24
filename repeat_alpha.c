/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:17:07 by myanez-p          #+#    #+#             */
/*   Updated: 2023/04/24 15:09:00 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int j;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 64;
				while (j)
				{
					write(1, &argv[1][i], 1);
					j --;
				}
			}
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 96;
				while (j)
				{
					write(1, &argv[1][i], 1);
					j --;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i ++;
		}
		write(1, "\n", 1);
	}
}