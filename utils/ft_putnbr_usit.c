/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_usit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:40:27 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/30 22:37:47 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_usit(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 10)
	{
		len += ft_putchar(nb + 48);
	}
	else
	{
		len += ft_putnbr_usit(nb / 10);
		len += ft_putnbr_usit(nb % 10);
	}
	return (len);
}
