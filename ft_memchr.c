/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 22:16:54 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/25 13:10:50 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cur;

	cur = (unsigned char*)s;
	while (n--)
	{
		if (*cur == (unsigned char)c)
		{
			return ((void *)cur);
		}
		cur++;
	}
	return (NULL);
}
