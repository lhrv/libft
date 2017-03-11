/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhorvat <lhorvat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:21:21 by lhorvat           #+#    #+#             */
/*   Updated: 2017/01/19 18:37:35 by lhorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long l_nbr;
	long d;

	l_nbr = (long)n;
	d = 1;
	if (l_nbr < 0)
	{
		ft_putchar_fd(45, fd);
		l_nbr *= -1;
	}
	if (l_nbr == 0)
		ft_putchar_fd(48, fd);
	while (l_nbr / d)
		d *= 10;
	while (d - 1)
	{
		ft_putchar_fd((l_nbr - (l_nbr / d * d)) / (d / 10) + 48, fd);
		d /= 10;
	}
}
