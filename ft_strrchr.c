/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 11:45:23 by Louis             #+#    #+#             */
/*   Updated: 2016/12/02 12:00:34 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr;

	ptr = s + ft_strlen(s);
	while (ptr >= s)
	{
		if (*ptr == (char)c)
			return ((char*)ptr);
		ptr--;
	}
	return (NULL);
}
