# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 12:30:22 by lvasseur          #+#    #+#              #
#    Updated: 2016/12/15 13:44:51 by lvasseur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	ft_backtracking.c ft_checkmat.c ft_coord.c ft_delete_first.c ft_initcursor.c \
	ft_is_that_ok.c ft_isole_pieces.c ft_isvalid_all.c ft_malltab.c ft_morph_to_piece.c \
	ft_n_or_o.c ft_number_of_pieces.c ft_putpiece.c ft_resetp.c ft_size_tab.c \
	ft_solverfillit.c ft_tabfree.c ft_tabdup.c ft_tabprint.c ft_tabset.c is_k.c \
	is_there_invalid.c max_xy.c my_main.c number_of_char.c

all: $(NAME)

$(NAME):
	make -C libft
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) libft/libft.a

clean:
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a

re: fclean all
