/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:56:22 by lhorvat           #+#    #+#             */
/*   Updated: 2017/02/20 18:56:30 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *fresh;

	fresh = NULL;
	if (!(fresh = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		fresh->content = (void*)content;
		fresh->content_size = content_size;
	}
	else
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	fresh->next = NULL;
	return (fresh);
}
