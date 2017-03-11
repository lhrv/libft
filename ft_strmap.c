/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 17:30:50 by Louis             #+#    #+#             */
/*   Updated: 2017/01/25 13:53:27 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *start;

	if (!s || !f)
		return (NULL);
	new = NULL;
	if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	start = new;
	while (*s)
	{
		*new = f(*s);
		new++;
		s++;
	}
	*new = '\0';
	return (start);
}
