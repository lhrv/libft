/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 16:31:56 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/25 18:47:43 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(char const *s, char c)
{
	int			wrd;

	wrd = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		wrd++;
		while (*s && *s == c)
			s++;
	}
	return (wrd);
}

char			**ft_strsplit(char const *s, char c)
{
	int			wrd;
	int			len;
	char		**tab;
	char		**tmp;

	if (!s)
		return (NULL);
	wrd = ft_count_word(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (wrd + 1))))
		return (NULL);
	*(tab + wrd) = NULL;
	tmp = tab;
	while (wrd--)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (*(s + len) && *(s + len) != c)
			len++;
		*tab++ = ft_strsub(s, 0, len);
		while (*s && *s != c)
			s++;
	}
	return (tmp);
}
