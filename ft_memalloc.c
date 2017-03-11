/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 16:02:52 by Louis             #+#    #+#             */
/*   Updated: 2017/01/25 13:09:35 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = (void*)malloc(sizeof(char) * size)))
	{
		ft_bzero(mem, size);
		return (mem);
	}
	return (NULL);
}
