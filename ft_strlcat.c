/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:22:00 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/25 19:47:42 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		lendst;
	size_t		lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendst)
		return (lensrc + size);
	else
	{
		dst = lendst + dst;
		while (*src && size - 1 - lendst)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
		return (lensrc + lendst);
	}
}
