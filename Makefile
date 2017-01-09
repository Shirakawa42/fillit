# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/26 20:45:05 by zadrien           #+#    #+#              #
#    Updated: 2017/01/09 14:12:59 by zadrien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: make all clean fclean re

NAME = fillit

LIB = -L libft/ -lft

LIBFT = libft/libft.a

C_DIR = srcs/

SRCS = main.c ft_backtracking.c ft_coord.c ft_delete_first.c \
	ft_is_that_ok.c ft_isole_pieces.c ft_isvalid_all.c ft_malltab.c \
	ft_n_or_o.c ft_number_of_pieces.c ft_putpiece.c ft_size_tab.c \
	ft_tabfree.c ft_tabset.c is_k.c ft_morph_to_piece.c \
	is_there_invalid.c max_xy.c my_main.c number_of_char.c

SRC = $(addprefix $(C_DIR), $(SRCS))

OBJ = $(SRCS:.c=.o)

INC = -I includes -I libft/

all : $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	gcc -Wall -Wextra -Werror $^ -o $@ $(LIB)

$(LIBFT):
	make -C libft/

$(OBJ) : $(SRC)
	gcc -c -Wall -Wextra -Werror $^ $(INC)

clean :
	make clean -C libft/
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIBFT)
	rm -f libft.a
	rm -f $(NAME)

re : fclean all
