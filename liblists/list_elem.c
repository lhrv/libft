/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 19:09:22 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/27 16:05:31 by lhorvat          ###   ########.fr       */
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
