/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:00:53 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/27 16:01:07 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_listc			*list_init(void *data)
{
	t_listc		*list;
	t_elem		*element;

	list = malloc(sizeof(*list));
	element = malloc(sizeof(*element));
	if (list == NULL || element == NULL)
		return (NULL);
	element->data = data;
	element->next = NULL;
	list->first = element;
	list->last = element;
	list->len = 1;
	return (list);
}
