/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblists_write.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 20:32:40 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/21 18:30:29 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_listc			*list_init(void *data)
{
	t_listc		*liste;
	t_elem		*element;

	liste = malloc(sizeof(*liste));
	element = malloc(sizeof(*element));
	if (liste == NULL || element == NULL)
		return (NULL);
	element->data = data;
	element->next = NULL;
	liste->first = element;
	liste->last = element;
	liste->len = 1;
	return (liste);
}

t_elem		*list_insert_head(t_listc **liste, void *newdata)
{
	t_elem *new_elem;

	if (!(*liste))
	{
		(*liste) = list_init(newdata);
		return ((*liste)->first);
	}
	new_elem = malloc(sizeof(*new_elem));
	if ((*liste) == NULL || new_elem == NULL)
		return (NULL);
	new_elem->data = newdata;
	new_elem->next = (*liste)->first;
	(*liste)->first = new_elem;
	(*liste)->len++;
	return (new_elem);
}

t_elem		*list_insert_tail(t_listc **liste, void *newdata)
{
	t_elem *new_elem;

	if (!(*liste))
	{
		(*liste) = list_init(newdata);
		return ((*liste)->first);
	}
	new_elem = malloc(sizeof(*new_elem));
	if ((*liste) == NULL || new_elem == NULL)
		return (NULL);
	new_elem->data = newdata;
	new_elem->next = NULL;
	(*liste)->last->next = new_elem;
	(*liste)->last = new_elem;
	(*liste)->len++;
	return (new_elem);
}

/*
** returns a pointer to the data to free.
** So by default, it does only free the link itself, and not its data.
** to do so, free(list_elem_del(&list, 4))
** or mem_del to NULL the pointer to the list.
*/

void		*list_elem_del(t_listc **list, size_t index)
{
	t_elem	*prev;
	t_elem	*to_del;
	void	*to_free;

	if (!*list || index > (*list)->len - 1)
		return (NULL);
	to_del = (*list)->first;
	if (!index)
		(*list)->first = (*list)->first->next;
	else
	{
		to_del = (prev = list_elem(*list, index - 1))->next;
		if (index == (*list)->len - 1)
		{
			((*list)->last = prev)->next = NULL;
		}
		else
			prev->next = prev->next->next;
	}
	to_free = to_del->data;
	free(to_del);
	(--(*list)->len == 0) ? ft_memdel((void**)list) : 0;
	return (to_free);
}

/*
** whereas previously, this function will free link by link,
** then free their returned content.
** so it does work only if data pointed is on heap.
*/

void		list_free(t_listc **list)
{
	void	*to_free;

	if (!*list)
		return ;
	while ((to_free = list_elem_del(list, 0)))
		free(to_free);
	*list = NULL;
}
