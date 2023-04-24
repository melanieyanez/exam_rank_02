/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:13:01 by myanez-p          #+#    #+#             */
/*   Updated: 2023/01/13 15:20:53 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int	i;
	
	i = 0;

	while (str[i] == ' ' || str[i] == '	')
		i ++;
	while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
	{
		write (1, &str[i], 1);
		i ++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char *str = "		   salut ca va";
	first_word(str);
}