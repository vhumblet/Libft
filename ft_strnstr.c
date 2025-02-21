/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:08:31 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 16:41:47 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[j] == 0)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
			while (s1[i + j] == s2[j] && i + j < len && s2[j])
				j++;
		if (i + j <= len && s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	char	*str = "aaxx";
	char	*str2 = "xx";

	//ft_putstr_fd(ft_strnstr(str, str2, 30), 1);
	//ft_putstr_fd(strnstr(str, str2, 30), 1);
	printf("ft = %s\n", ft_strnstr(str, str2, 4));
	printf("lb = %s\n", strnstr(str, str2, 4));
}
*/