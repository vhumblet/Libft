/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:06:30 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/18 13:36:08 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	return_atoi_unll(unsigned long long nb_llu,
	int sign, int size, int count)
{
	unsigned long long		max;

	max = 922337203854775807;
	if (count > 1)
		return (0);
	else if (((nb_llu > max) && size > 19) && sign > 0)
		return (-1);
	else if (((nb_llu > (max + 1)) && size > 19) && sign < 0)
		return (0);
	return (nb_llu * sign);
}

int	ft_atoi(const char *str)
{
	unsigned long long		nb_llu;
	int						i;
	int						sign;
	int						count;
	int						size;

	nb_llu = 0;
	i = 0;
	sign = 1;
	count = 0;
	size = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
		count++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57 && ++size)
		nb_llu = nb_llu * 10 + str[i++] - 48;
	return (return_atoi_unll(nb_llu, sign, size, count));
}
