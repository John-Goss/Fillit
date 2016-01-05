# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgosset <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/11 16:41:02 by vgosset           #+#    #+#              #
#    Updated: 2016/01/05 13:16:36 by jle-quer         ###   ########.fr        #
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

LIB_DIR = Libft/

NAME = fillit

FLAG = -Wall -Wextra -Werror

CC = gcc

all : $(NAME)

LIB = libft.a

$(NAME) : $(OBJ) $(LIB)
	$(CC) $(FLAG) $(OBJ) -L $(LIB_DIR) -lft -I$(LIB_DIR) -o $(NAME)
%.o:%.c
	$(CC) $(FLAG) -c $< -o $@
$(LIB) :
	make -C $(LIB_DIR)
clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
