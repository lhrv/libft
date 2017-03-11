/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:16:49 by Louis             #+#    #+#             */
/*   Updated: 2017/01/25 14:05:16 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	char			*start;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new = NULL;
	if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	start = new;
	i = 0;
	while (*s)
	{
		*new = f(i, *s);
		new++;
		s++;
		i++;
	}
	*new = '\0';
	return (start);
}
