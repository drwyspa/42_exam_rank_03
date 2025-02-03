/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:58:48 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/30 19:03:14 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Write any char
void	ft_putchar(char c, size_t *count)
{
	write(1, &c, 1);
	(*count)++;
}
