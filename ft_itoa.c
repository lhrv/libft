/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 15:06:16 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 19:30:35 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		my_itoa_fill(char *str, long n, long d)
{
	if (n < 0)
	{
		*str++ = '-';
		n = -n;
	}
	d /= 10;
	while (d)
	{
		*str++ = n / d + 48;
		n = n - (n / d * d);
		d /= 10;
	}
	*str = '\0';
}

char			*ft_itoa(int n)
{
	int		i;
	long	d;
	char	*tab;

	i = 0;
	d = 1;
	if (!n)
		return (ft_strdup("0"));
	while (n / d)
	{
		d *= 10;
		i++;
	}
	if (!(tab = (char*)malloc(sizeof(char) * (i + 1) + (n < 0))))
		return (NULL);
	my_itoa_fill(tab, (long)n, d);
	return (tab);
}
