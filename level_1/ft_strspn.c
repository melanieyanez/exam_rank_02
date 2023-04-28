/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:08:37 by melanieyane       #+#    #+#             */
/*   Updated: 2023/04/28 17:14:47 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* not tested */

int	is_in_charset(const char *str, char str_i)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == str_i)
			return (1);
		i ++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (is_in_charset(reject, s[i]) == 0)
			return (i);
		i ++;
	}
	return (i);
}
