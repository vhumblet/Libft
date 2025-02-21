/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:08:05 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 19:27:25 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_join;
	int		ls1;
	int		ls2;
	int		t_len;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	t_len = ls1 + ls2;
	s_join = (char *)malloc(sizeof(char) * t_len + 1);
	if (!s_join)
		return (NULL);
	ft_memmove(s_join, s1, ls1);
	ft_memmove(s_join + ls1, s2, ls2);
	s_join[t_len] = 0;
	return (s_join);
}
