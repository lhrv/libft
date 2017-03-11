/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 21:29:17 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/20 15:24:12 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *cur;
	unsigned char *cursrc;

	cur = (unsigned char *)dst;
	cursrc = (unsigned char *)src;
	while (n--)
	{
		*(cur++) = *(cursrc++);
		if (*(cur - 1) == (unsigned char)c)
			return (cur);
	}
	return (NULL);
}
