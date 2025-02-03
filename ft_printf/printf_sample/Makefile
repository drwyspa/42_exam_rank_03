# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 19:43:45 by pjedrycz          #+#    #+#              #
#    Updated: 2024/04/30 19:57:09 by pjedrycz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf_utils.c 	\
			ft_printf.c 		\
			ft_putchar.c 		\
			ft_puthex.c 		\
			ft_putnbr.c 		\
			ft_putptr.c 		\
			ft_putstr.c 		\
			ft_putuint.c

OBJS	=	$(SRCS:.c=.o)

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror

NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:		all clean fclean re
	