# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgosset <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 16:41:02 by vgosset           #+#    #+#              #
#    Updated: 2016/01/04 20:18:29 by jle-quer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.c \
		ft_checkbuf.c \
		ft_read.c \
		ft_checknext.c \
		ft_countsize.c \
		ft_createtab.c \
		ft_display.c \
		ft_error.c \
		ft_lasttab.c \
		ft_readtoplace.c \
		ft_replaceform.c \
		ft_resfillit.c

OBJ = $(SRC:.c=.o)

LIB_DIR = lib

NAME = fillit

FLAG = -Wall -Wextra -Werror

CC = gcc

all : $(NAME)

$(LIB) :
	(cd $(LIB_DIR) $(MAKE))

$(NAME) : $(OBJ) $(LIB)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) -I $(LIB_DIR)
%.o:%.c
	$(CC) $(FLAG) -c $< -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
