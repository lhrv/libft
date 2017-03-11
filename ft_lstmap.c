/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:36:29 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/25 13:09:00 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*prev;

	start = f(lst);
	prev = start;
	lst = lst->next;
	while (lst)
	{
		prev->next = f(lst);
		prev = prev->next;
		lst = lst->next;
	}
	return (start);
}
