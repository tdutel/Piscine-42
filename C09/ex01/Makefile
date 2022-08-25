# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdutel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 13:29:11 by tdutel            #+#    #+#              #
#    Updated: 2022/08/25 09:32:07 by tdutel           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
FLAG = -Wall -Wextra -Werror

.c.o :
	gcc ${FLAG} -I includes -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
