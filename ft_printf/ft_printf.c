/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seroy <seroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:45:59 by seroy             #+#    #+#             */
/*   Updated: 2023/02/15 22:25:44 by seroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"
#include <string.h>

static int	ft_putnbr_num(int num)
{
	int	size;

	size = 0;
	ft_putnbr(num, &size);
	return (size);
}

static unsigned int	ft_putnbr_num_unsigned(unsigned int num)
{
	int	size;

	size = 0;
	ft_putnbr_unsigned(num, &size);
	return (size);
}

static int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_paddress(va_arg(args, unsigned long int)) + 2);
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_num(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_num_unsigned(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_hex(va_arg(args, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	size_t	len;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
