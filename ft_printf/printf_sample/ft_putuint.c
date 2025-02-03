/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:18:43 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/04/30 19:59:26 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

// Write unsigned int
void	ft_putuint(unsigned int n, size_t *count)
{
	char	*str;

	str = ft_util(n, "0123456789");
	ft_putstr(str, count);
	free(str);
}
