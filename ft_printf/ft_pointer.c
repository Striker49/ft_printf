/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seroy <seroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:25:14 by seroy             #+#    #+#             */
/*   Updated: 2023/02/15 22:26:31 by seroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_checklen(unsigned long int n)
{
	int	i;

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

int	ft_paddress(unsigned long int n)
{
	int	len;

	if (n >= 16)
	{
		ft_paddress(n / 16);
		ft_paddress(n % 16);
	}
	else
		write (1, &"0123456789abcdef"[n % 16], 1);
	len = ft_checklen(n);
	return (len);
}
