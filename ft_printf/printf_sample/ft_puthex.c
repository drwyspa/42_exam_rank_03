/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:07:39 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/30 19:59:30 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

// Write in hex
void	ft_puthex(unsigned int num, size_t *count, char *base)
{
	char	*str;

	str = ft_util(num, base);
	ft_putstr(str, count);
	free(str);
}
