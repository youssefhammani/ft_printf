/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:03:59 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/30 22:24:13 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_checker(const char format, va_list ap);
int	ft_printf(const char *format, ...);
int	ft_printhex(unsigned long int nb);
int	ft_printhex_check(unsigned int nb, int base);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbr_usit(unsigned int nb);
int	ft_putstr(char *s);

#endif
