/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:45:07 by Louis             #+#    #+#             */
/*   Updated: 2017/01/25 14:09:10 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	m;
	size_t	i;

	m = ft_strlen(s2);
	if (*s2 == 0)
		return ((char*)s1);
	if (*s1 == 0)
		return (NULL);
	i = m;
	while (*s1 && i <= n)
	{
		if (ft_strncmp(s1, s2, m) == 0)
			return ((char*)s1);
		else
		{
			s1++;
			i++;
		}
	}
	return (NULL);
}
