/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:58 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 13:26:44 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	end;

	i = -1;
	end = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[end]);
	while (s[++i])
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "bonjour ceci est un test je repete ceci est u2n test";

	printf("ft = %s\n", ft_strchr(str, '2'));
	printf("lb = %s\n", strchr(str, '2'));
}*/