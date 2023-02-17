/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seroy <seroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:25:36 by seroy             #+#    #+#             */
/*   Updated: 2023/02/15 21:25:52 by seroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*p;

	p = "pointeur";
	ft_printf("char:%c\n", 'c');
	ft_printf("string:%s\n", "string");
	ft_printf("pointer:%p\n", &p);
	printf("vpointer:%p\n", &p);
	ft_printf("digit:%d\n", 9876);
	ft_printf("i:%i\n", 4210);
	ft_printf("unsigned:%u\n", 21);
	ft_printf("hexa:%x\n", 1234);
	ft_printf("HEXA:%X\n", 1234);
	printf("vHEXA:%X\n", 1234);
	ft_printf("percent:%%\n");
}

//gcc main.c libftprintf.a && ./a.out