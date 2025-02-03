/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:51:26 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/30 20:02:11 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "ft_printf.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdint.h>
# include <limits.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

// Main section
void			ft_format(va_list arg, char *str, size_t *count);
int				ft_printf(const char *str, ...);

// Utilities
size_t			ft_strlen(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
char			*ft_util(unsigned long long n, char *base);

// Formatting functions
void			ft_putchar(char c, size_t *counter);
void			ft_putstr(char *str, size_t *counter);
void			ft_putnbr(int num, size_t *counter);
void			ft_putuint(unsigned int num, size_t *counter);
void			ft_puthex(unsigned int num, size_t *counter, char *base);
void			ft_putptr(void *ptr, size_t *counter);

#endif