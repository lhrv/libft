/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblists.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:36:50 by lhorvat           #+#    #+#             */
/*   Updated: 2017/04/21 19:08:53 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLISTS_H
# define LIBLISTS_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

typedef struct		s_elem
{
	void			*data;
	struct s_elem	*next;
}					t_elem;

typedef struct		s_listcontrol
{
	size_t			len;
	t_elem			*first;
	t_elem			*last;
}					t_listc;

t_listc				*list_init(void *data);
t_elem				*list_insert_head(t_listc **liste, void *newdata);
t_elem				*list_insert_tail(t_listc **liste, void *newdata);
t_elem				*list_elem(t_listc *list, size_t index);
void				*list_elem_del(t_listc **list, size_t index);
void				list_free(t_listc **list);
void				list_to_char(t_listc *list, char *dest);

#endif
