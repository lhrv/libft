/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 20:52:52 by lhorvat           #+#    #+#             */
/*   Updated: 2016/11/24 22:14:54 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *cur;
	char *cursrc;

	if (dst < src)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	cur = (char *)dst;
	cursrc = (char *)src;
	while (len--)
		*(cur + len) = *(cursrc + len);
	return (dst);
}
