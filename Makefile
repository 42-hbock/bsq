#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsisic <bsisic@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/22 10:43:16 by bsisic            #+#    #+#              #
#    Updated: 2014/07/22 22:30:09 by bsisic           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY:		all clean fclean re

SRC = 		srcs/check_map.c srcs/dynamic_sol.c srcs/reader_dynamic_sol.c\
			srcs/ft_atoi_putnbr.c srcs/main_bsq.c srcs/print_matrice.c\
			srcs/recup_in.c srcs/str_manip.c srcs/str_map_check.c srcs/error.c\
			srcs/print.c srcs/realloc.c

NAME = 		bsq

FLAGS = 	-Wall -Wextra -Werror

all:		default

default:
			gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all