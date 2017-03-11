/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Louis <Louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:34:46 by Louis             #+#    #+#             */
/*   Updated: 2016/12/04 22:06:03 by Louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new;
	char *adr;

	if (!s)
		return (NULL);
	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	adr = new;
	s += start;
	while (len--)
		*new++ = *s++;
	*new = '\0';
	return (adr);
}
