/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:29 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 15:52:08 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (&tmp[i]);
		i++;
	}
	if (n == i)
		return (0);
	return (NULL);
}
