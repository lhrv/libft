/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblists_read.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 16:15:55 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/21 18:29:44 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_elem	*list_elem(t_listc *list, size_t index)
{
	size_t i;
	t_elem *elem;

	i = 0;
	if (index > list->len - 1)
		return (NULL);
	else if (index == (list->len) - 1)
		return (list->last);
	elem = list->first;
	while (i < index)
	{
		elem = elem->next;
		i++;
	}
	return (elem);
}
