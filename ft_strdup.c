/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:08:00 by vhumblet          #+#    #+#             */
/*   Updated: 2024/11/05 13:47:40 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*dup;
	int		i;

	str = (char *)s;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dup == 0)
		return (0);
	if (!str)
	{
		*dup = '\0';
		return (dup);
	}
	i = 0;
	while (*str)
	{
		dup[i] = *str;
		str++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
