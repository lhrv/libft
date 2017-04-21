/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 18:44:22 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/21 18:44:46 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void			list_to_char(t_listc *list, char *dest)
{
	size_t		i;
	t_elem		*elem;
	char		*data;

	i = 0;
	elem = list->first;
	while (i < list->len)
	{
		data = elem->data;
		while (*data)
			*dest++ = *data++;
		i++;
		elem = elem->next;
	}
}
