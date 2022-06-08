/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:30:44 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/30 22:31:09 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printhex_check(unsigned int nb, int base)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb < 10)
			len += ft_putchar(nb + 48);
		else
		{
			if (base == 1)
				len += ft_putchar(nb + 87);
			else
				len += ft_putchar(nb + 55);
		}
	}
	if (nb >= 16)
	{
		len += ft_printhex_check(nb / 16, base);
		len += ft_printhex_check(nb % 16, base);
	}
	return (len);
}
