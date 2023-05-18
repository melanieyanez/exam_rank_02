/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:36:34 by melanieyane       #+#    #+#             */
/*   Updated: 2023/05/18 11:21:28 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	free_malloc(char **result, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		free(result[j]);
		j ++;
	}
}

int	nbr_substr(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i ++;
		if (str[i])
			nb ++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i ++;
	}
	return (nb);
}

char	*substr_gen(int *index, char *str)
{
	char	*sub_result;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[*index] && (str[*index] == ' ' || str[*index] == '\t' || str[*index] == '\n'))
		(*index)++;
	while (str[*index + size] && str[*index + size] != ' ' && str[*index + size] != '\t' && str[*index + size] != '\n')
		size ++;
	sub_result = malloc(sizeof(char) * (size + 1));
	if (!sub_result)
		return (NULL);
	while (i < size)
	{
		sub_result[i] = str[*index];
		i ++;
		(*index)++;
	}
	sub_result[i] = '\0';
	return (sub_result);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;
	int		index;

	result = malloc(sizeof(char **) * (nbr_substr(str) + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < nbr_substr(str))
	{
		result[i] = substr_gen(&index, str);
		if (!result[i])
		{
			free_malloc(result, i);
			free(result);
			return (NULL);
		}
		i ++;
	}
	result[i] = 0;
	return (result);
}
