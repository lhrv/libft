/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_elem_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:01:58 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/27 18:24:13 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns a pointer to the data to free.
** So by default, it does only free the link itself, and not its data.
** to do so, free(list_elem_del(&list, 4))
** or mem_del to NULL the pointer to the list.
*/

void			*list_elem_del(t_listc **list, size_t index)
{
	t_elem		*prev;
	t_elem		*to_del;
	void		*to_free;

	if (!*list || index > (*list)->len - 1)
		return (NULL);
	to_del = (*list)->first;
	if (!index)
		(*list)->first = (*list)->first->next;
	else
	{
		prev = list_elem(*list, index - 1);
		to_del = prev->next;
		if (index == (*list)->len - 1)
		{
			(*list)->last = prev;
			(*list)->last->next = NULL;
		}
		else
			prev->next = prev->next->next;
	}
	to_free = to_del->data;
	free(to_del);
	(--(*list)->len == 0) ? ft_memdel((void**)list) : 0;
	return (to_free);
}
