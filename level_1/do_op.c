/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:05:00 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/27 16:40:43 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
}
