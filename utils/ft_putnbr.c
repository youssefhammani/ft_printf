/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:13:58 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/30 22:33:51 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int			len;
	long long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		len += ft_putchar('-');
	}
	if (nb < 10)
	{
		len += ft_putchar(nb + '0');
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}
