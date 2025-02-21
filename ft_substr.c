/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:08:42 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 19:22:08 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	ssize_t		i;
	size_t		len_sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = -1;
	substr = NULL;
	len_sub = ft_strlen(&s[start]);
	if (len_sub >= len)
	{
		substr = (char *)malloc(sizeof(char) * len + 1);
		len_sub = len;
	}
	else if (len_sub <= len)
		substr = (char *)malloc(sizeof(char) * len_sub + 1);
	if (!substr)
		return (NULL);
	while (++i < (ssize_t)len_sub && s[start + i] != '\0')
		substr[i] = s[start + i];
	substr[i] = 0;
	return (substr);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *lol = "quelque chose dans la str";
	
	printf("%s\n", ft_substr(lol, 80, 80));
	return(0);
}
*/