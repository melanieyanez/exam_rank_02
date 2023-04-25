/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:56:16 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/25 10:02:27 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            write(1, "_", 1);
            argv[1][i] = argv[1][i] + 32; 
        }
        write(1, &argv[1][i], 1);
        i ++;
    }
}