/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:47:20 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/29 22:37:06 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

void	ft_format(va_list arg, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (*str == 'p')
		ft_putptr(va_arg(arg, void *), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(arg, int), count);
	else if (*str == 'u')
		ft_putuint(va_arg(arg, unsigned int), count);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex(va_arg(arg, unsigned int), count, HEX_LOW_BASE);
		else
			ft_puthex(va_arg(arg, unsigned int), count, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar(*str, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	size_t	count;

	count = 0;
	if (!str)
		return (0);
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(arg, (char *) str, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(arg);
	return (count);
}
