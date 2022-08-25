# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdutel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 12:41:10 by tdutel            #+#    #+#              #
#    Updated: 2022/08/21 19:52:19 by tdutel           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = rush-02
SRC =  main.c main.h make_adress_list.c make_adress_list_utils.c numbers.dict
OBJ =  main.o main.o make_adress_list.o make_adress_list_utils.o numbers.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Werror -Wextra

main.o : main.c
	gcc -o main.o -c main.c

make_adress_list.o : make_adress_list.c
	gcc -o make_adress_list.o -c make_adress_list.c

make_adress_list_utils.o : make_adress_list_utils.c
	gcc -o make_adress_list_utils.o -c make_adress_list_utils.c

numbers.o : numbers.dict
	gcc -o numbers.o -c numbers.dict

main.o : main.h
	gcc -o main.o -c main.h
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

