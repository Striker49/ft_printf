# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seroy <seroy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 13:18:40 by seroy             #+#    #+#              #
#    Updated: 2023/02/15 22:24:05 by seroy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft.a

LPATH = libft/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c puts.c hex.c ft_pointer.c

OBJS = $(SRC:%.c=%.o)




all: $(LPATH)$(LIBFT) $(NAME) 

$(NAME): $(OBJS)
	cp $(LPATH)$(LIBFT) $(NAME)
	ar -rc $(NAME) $(OBJS)	

$(LPATH)$(LIBFT):
	$(MAKE) -C $(LPATH)

clean: 
	rm -f $(OBJS) 
	$(MAKE) clean -C $(LPATH)

fclean: clean
	rm -f $(NAME) 
	$(MAKE) fclean -C $(LPATH)

re: fclean all

.PHONY: all clean fclean re