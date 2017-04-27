/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 16:02:04 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/27 16:02:12 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** whereas previously, this function will free link by link,
** then free their returned content.
** so it does work only if data pointed is on heap.
*/

void			list_free(t_listc **list)
{
	void		*to_free;

	if (!*list)
		return ;
	while ((to_free = list_elem_del(list, 0)))
		free(to_free);
	*list = NULL;
}
