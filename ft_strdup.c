/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 22:42:07 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/20 18:16:52 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *ptr;
	char *start;

	if (!(ptr = (char*)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	start = ptr;
	while (*s1)
	{
		*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (start);
}
