# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apopinea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 16:32:49 by apopinea          #+#    #+#              #
#    Updated: 2016/11/03 16:48:43 by apopinea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, fclean, re

.SUFFIXES:

NAME_LIB = libft
DIR_FT = ./srcs/
DIR_HEADER = ./includes
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRO = $(SRC:.c=.o)
FULL_PATH = $(addprefix $(DIR_FT),$(SRC))
FLAG = -Wall -Werror -Wextra
CC = gcc

all: $(NAME_LIB)

$(NAME_LIB): $(SRO)
	ar rc libft.a $(SRO)

$(SRO): $(FULL_PATH)
	$(CC) $(FLAG) -c -I$(DIR_HEADER) $(FULL_PATH)

clean:
	rm -f $(SRO)

fclean: clean
	rm -f libft.a

re: fclean all
