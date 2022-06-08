# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhammani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 22:47:00 by yhammani          #+#    #+#              #
#    Updated: 2021/12/01 16:33:37 by yhammani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c	\
	   utils/ft_printhex.c	\
	   utils/ft_printhex_check.c	\
	   utils/ft_putchar.c		\
	   utils/ft_putnbr.c		\
	   utils/ft_putnbr_usit.c		\
	   utils/ft_putstr.c

OBJS = $(SRCS:.c=.o)

RM			= rm -f
CFLAGS		= cc -Wall -Wextra -Werror
NAME		= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	@ar rc $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
