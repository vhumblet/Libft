/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhumblet <vhumblet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:24 by vhumblet          #+#    #+#             */
/*   Updated: 2024/10/17 19:33:16 by vhumblet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;

	rtn = (t_list *)malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	rtn->next = NULL;
	rtn->content = content;
	return (rtn);
}
