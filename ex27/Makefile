# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apopinea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 16:32:49 by apopinea          #+#    #+#              #
#    Updated: 2016/11/04 08:54:35 by apopinea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, fclean, re

.SUFFIXES:

NAME_PROG = ft_display_file
NAME_LIB = libft
NAME_LIB_A = libft.a
DIR_FT = ./srcs/
DIR_HEADER = ./includes
SRC = ft_base.c ft_read.c
SRO = $(SRC:.c=.o)
FULL_PATH = $(addprefix $(DIR_FT),$(SRC))
SRCM = main.c
SROM = $(SRCM:.c=.o)
FULL_PATH_M = $(addprefix $(DIR_FT),$(SRCM))
FLAG = -Wall -Werror -Wextra
CC = gcc

all: $(NAME_PROG)

$(NAME_PROG): $(SROM) $(NAME_LIB)
	$(CC) $(FLAG) -o $@ $(SROM) $(NAME_LIB_A)

$(SROM): $(FULL_PATH_M)
	$(CC) $(FLAG) -c -I$(DIR_HEADER) $(FULL_PATH_M)

$(NAME_LIB): $(SRO)
	ar rc libft.a $(SRO)
	ranlib $(NAME_LIB_A)

$(SRO): $(FULL_PATH)
	$(CC) $(FLAG) -c -I$(DIR_HEADER) $(FULL_PATH)

clean:
	rm -f $(SRO) $(SROM)

fclean: clean
	rm -f $(NAME_PROG) $(NAME_LIB_A)

re: fclean all
