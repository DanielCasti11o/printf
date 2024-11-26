# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 20:38:40 by dacastil          #+#    #+#              #
#    Updated: 2024/11/24 21:20:24 by dacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
NAME = libftprintf.a

SRCS = ft_putchar.c  ft_putstr.c ft_putnbr.c ft_puthex.c \
	ft_putpointer.c ft_putunbr.c ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
		ls
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS)
fclean:
		$(RM) $(OBJS) $(NAME)
re: fclean all

.PHONY: all clean fclean re
