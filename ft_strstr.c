/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:00:46 by Louis             #+#    #+#             */
/*   Updated: 2017/01/25 14:09:39 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *str;
	const char *sub;

	if (!*s2)
		return ((char*)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			str = s1;
			sub = s2;
			while (*str == *sub)
			{
				str++;
				sub++;
				if (!*sub)
					return ((char*)s1);
			}
		}
		s1++;
	}
	return (NULL);
}
