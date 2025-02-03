/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:04:05 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/30 19:59:10 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

// Write pointer address
void	ft_putptr(void *ptr, size_t *count)
{
	char			*str;
	unsigned long	ptr_address;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return ;
	}
	ptr_address = (unsigned long) ptr;
	ft_putstr("0x", count);
	str = ft_util(ptr_address, HEX_LOW_BASE);
	ft_putstr(str, count);
	free(str);
}
