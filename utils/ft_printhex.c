/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:25:07 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/30 22:27:13 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printhex(unsigned long int nb)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb < 10)
			len += ft_putchar(nb + 48);
		else
			len += ft_putchar(nb + 87);
	}
	if (nb >= 16)
	{
		len += ft_printhex(nb / 16);
		len += ft_printhex(nb % 16);
	}
	return (len);
}
