# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgosset <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 16:41:02 by vgosset           #+#    #+#              #
#    Updated: 2015/12/15 14:41:21 by vgosset          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_placebuf.c \
	  ft_checkbuf.c \
	  ft_read.c \
	  ft_checknext.c

OBJ = $(SRC:.c=.o)

LIB_DIR = lib

NAME = fillit

FLAG = -Wall -Wextra -Werror

CC = gcc

all : $(NAME)

$(LIB) :
	(cd $(LIB_DIR) $(MAKE))

$(NAME) : $(OBJ) $(LIB)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) -I$(LIB_DIR)
%.o:%.c
	$(CC) $(FLAG) -c $< -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
