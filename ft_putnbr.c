/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:08:31 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/19 18:37:44 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long l_nbr;
	long d;

	l_nbr = (long)n;
	d = 1;
	if (l_nbr < 0)
	{
		ft_putchar(45);
		l_nbr *= -1;
	}
	if (l_nbr == 0)
		ft_putchar(48);
	while (l_nbr / d)
		d *= 10;
	while (d - 1)
	{
		ft_putchar((l_nbr - (l_nbr / d * d)) / (d / 10) + 48);
		d /= 10;
	}
}
