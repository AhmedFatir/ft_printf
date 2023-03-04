# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afatir <afatir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 12:19:47 by afatir            #+#    #+#              #
#    Updated: 2022/11/16 09:33:58 by afatir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	ft_putchar.c ft_putstr.c ft_put_deci.c \
			ft_put_unsigned.c ft_put_hexa.c ft_put_ad.c ft_printf.c

NAME	= libftprintf.a

OBJS	= ${SRCS:%.c=%.o}

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}


%.o: %.c	ft_printf.h
			${CC} ${CFLAGS}  -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
