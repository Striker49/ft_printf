/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seroy <seroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:39:20 by seroy             #+#    #+#             */
/*   Updated: 2023/02/15 22:23:11 by seroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# include <unistd.h>

// char	*ft_decitohexa(int n);
int		ft_printf(const char *format, ...);
int		ft_hex(unsigned int n, char c);
int		ft_paddress(unsigned long int n);
int		ft_putstr(char *s);
int		ft_putchar(char c);
void	ft_putnbr(int n, int *size);
void	ft_putnbr_unsigned(unsigned int n, int *size);

#endif
