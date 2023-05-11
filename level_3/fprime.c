/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:36:12 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/08 10:49:44 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	number;
	int	factor;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		factor = 2;
		while (number >= factor)
		{
			if (number % factor == 0)
			{
				printf("%d", factor);
				if (number == factor)
					break ;
				printf("*");
				number = number / factor;
				factor = 1;
			}
			factor ++;
		}
	}
	printf("\n");
}
