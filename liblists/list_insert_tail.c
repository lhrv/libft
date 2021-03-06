/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_tail.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:01:32 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/27 18:24:11 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_elem			*list_insert_tail(t_listc **list, void *newdata)
{
	t_elem		*new_elem;

	if (!(*list))
	{
		(*list) = list_init(newdata);
		return ((*list)->first);
	}
	new_elem = malloc(sizeof(*new_elem));
	if ((*list) == NULL || new_elem == NULL)
		return (NULL);
	new_elem->data = newdata;
	new_elem->next = NULL;
	(*list)->last->next = new_elem;
	(*list)->last = new_elem;
	(*list)->len++;
	return (new_elem);
}
