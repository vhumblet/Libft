/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:08:09 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 19:26:51 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	total_len;

	i = 0;
	len_d = ft_strlen(dst);
	total_len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize == 0 || len_d >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[i] && len_d + i < dstsize - 1)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	if (len_d + i < dstsize)
		dst[len_d + i] = 0;
	return (total_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "bonjour ";
	char	src[20] = "les amis";
	char	dest2[20] = "bonjour ";
	
	printf("ft_fonction = %zu\n", ft_strlcat(dest, src, 8));
	printf("ft_fonction = %s\n", dest);
	printf("lb_fonction = %lu\n", strlcat(dest2, src, 8));
	printf("lb_fonction = %s\n", dest2);
	return (0);
}*/