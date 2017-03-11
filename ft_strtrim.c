/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/25 21:18:34 by Louis             #+#    #+#             */
/*   Updated: 2017/01/26 17:40:59 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char const	*str;
	char const	*start;

	start = s;
	str = s;
	if (!s)
		return (NULL);
	s = s + ft_strlen(s) - 1;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s--;
	s++;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	return (ft_strsub(str, 0, (s != start) * (s - str)));
}
