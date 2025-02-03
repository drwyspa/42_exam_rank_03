/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:13:39 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/30 19:57:55 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

// Write some number
void	ft_putnbr(int num, size_t *count)
{
	if (num == -2147483648)
	{
		ft_putnbr((num / 10), count);
		ft_putchar('8', count);
	}
	else if (num < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(-num, count);
	}
	else
	{
		if (num > 9)
			ft_putnbr((num / 10), count);
		ft_putchar(('0' + num % 10), count);
	}
}
