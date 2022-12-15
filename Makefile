# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byjeon <byjeon@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 20:16:56 by byjeon            #+#    #+#              #
#    Updated: 2022/07/18 16:45:10 by byjeon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_class.c ft_putcs.c ft_puthex.c ft_putnbr.c ft_putptr.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar -crs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
