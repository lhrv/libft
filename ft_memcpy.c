/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 20:10:28 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/25 13:11:46 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *cur;
	char *cursrc;

	cur = (char *)dst;
	cursrc = (char *)src;
	while (n--)
		*(cur++) = *(cursrc++);
	return (dst);
}
