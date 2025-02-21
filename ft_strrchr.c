/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:08:34 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 14:26:39 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[end]);
	while (--end > -1)
		if (s[end] == (unsigned char)c)
			return ((char *)&s[end]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "bonjour ceci est un test je repete ceci est u2n test";

	printf("ft = %s\n", ft_strrchr(str, '\0'));
	printf("lb = %s\n", strrchr(str, '\0'));
}
*/