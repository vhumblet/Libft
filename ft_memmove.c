/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:39 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 13:00:30 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int						i;
	int						lent;
	unsigned char			*tmp_src;
	unsigned char			*tmp_dst;

	i = -1;
	lent = (int)len;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (tmp_dst >= tmp_src)
		while (lent--)
			tmp_dst[lent] = tmp_src[lent];
	else if (tmp_dst < tmp_src)
		while (++i < lent)
			tmp_dst[i] = tmp_src[i];
	return (dst);
}
