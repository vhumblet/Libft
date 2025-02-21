/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:06:37 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/18 16:34:19 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*al_mem;
	size_t	tmp;

	if (count != 0 && size != 0)
	{
		tmp = count * size;
		if ((tmp / count) != size)
			return (NULL);
	}
	al_mem = malloc(count * size);
	if (!al_mem)
		return (NULL);
	ft_bzero(al_mem, count * size);
	return (al_mem);
}
