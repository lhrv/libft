/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 23:44:53 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/25 13:55:21 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*str;

	str = dst;
	while (len && *src)
	{
		*str++ = *src++;
		len--;
	}
	while (len)
	{
		*str++ = '\0';
		len--;
	}
	return (dst);
}
