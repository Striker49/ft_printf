/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seroy <seroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:02:04 by seroy             #+#    #+#             */
/*   Updated: 2023/02/15 22:22:31 by seroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putnbr(int n, int *size)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		*size = 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		*size += 1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, size);
		ft_putchar(n % 10 + '0');
		*size += 1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		*size += 1;
	}
}

void	ft_putnbr_unsigned(unsigned int n, int *size)
{
	if (n > 9)
	{
		ft_putnbr_unsigned(n / 10, size);
		ft_putchar(n % 10 + '0');
		*size += 1;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		*size += 1;
	}
}
