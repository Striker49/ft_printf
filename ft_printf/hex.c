/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seroy <seroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:49:14 by seroy             #+#    #+#             */
/*   Updated: 2023/02/15 22:29:51 by seroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	ft_checklen(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_hex(unsigned int n, char c)
{
	int	len;

	if (n >= 16)
		ft_hex(n / 16, c);
	if (c == 'x')
		write (1, &"0123456789abcdef"[n % 16], 1);
	if (c == 'X')
		write (1, &"0123456789ABCDEF"[n % 16], 1);
	len = ft_checklen(n);
	return (len);
}
