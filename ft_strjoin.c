/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 21:32:07 by Louis             #+#    #+#             */
/*   Updated: 2017/01/25 13:51:22 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;

	if (!s1 || !s2)
		return (NULL);
	if (!(join = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(join, s1);
	ft_strcpy(join + ft_strlen(s1), s2);
	return (join);
}
