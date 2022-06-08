/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 01:00:43 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/30 22:23:17 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checker(const char format, va_list ap)
{
	int	len;

	len = 0;
	if (format == '%')
		len += ft_putchar('%');
	else if (format == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (format == 'u')
		len += ft_putnbr_usit(va_arg(ap, unsigned int));
	else if (format == 'x')
		len += ft_printhex_check(va_arg(ap, unsigned int), 1);
	else if (format == 'X')
		len += ft_printhex_check(va_arg(ap, unsigned int), 2);
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (format == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_printhex(va_arg(ap, unsigned long int));
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = -1;
	len = 0;
	va_start(ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
			len += ft_checker(format[++i], ap);
		else
			len += ft_putchar(format[i]);
	}
	va_end(ap);
	return (len);
}
