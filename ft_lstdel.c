/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:04:24 by lhorvat           #+#    #+#             */
/*   Updated: 2017/02/19 23:45:10 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *prev;

	while (*alst)
	{
		prev = *alst;
		ft_lstdelone(&prev, del);
		*alst = (*alst)->next;
	}
}
