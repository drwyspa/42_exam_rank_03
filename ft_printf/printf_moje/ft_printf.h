/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:36:59 by pjedrycz          #+#    #+#             */
/*   Updated: 2025/01/30 22:12:08 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>




//Utilities
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
static size_t	ft_len(unsigned long long n, char *base);
char	*ft_util(unsigned long long n, char *base);

#endif