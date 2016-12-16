# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 12:30:22 by lvasseur          #+#    #+#              #
#    Updated: 2016/12/16 12:33:10 by lvasseur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

NAME2 = fillit.a

SRC = ft_backtracking.c ft_checkmat.c ft_coord.c ft_delete_first.c ft_initcursor.c \
	ft_is_that_ok.c ft_isole_pieces.c ft_isvalid_all.c ft_malltab.c ft_morph_to_piece.c \
	ft_n_or_o.c ft_number_of_pieces.c ft_putpiece.c ft_resetp.c ft_size_tab.c \
	ft_solverfillit.c ft_tabfree.c ft_tabprint.c ft_tabset.c is_k.c \
	is_there_invalid.c max_xy.c my_main.c number_of_char.c

SRC2 = ft_strlen.c ft_strdup.c ft_strncpy.c ft_strncat.c \
	ft_strlcat.c ft_strstr.c ft_strnstr.c \
	ft_strncmp.c ft_atoi.c \
	ft_strnew.c ft_strdel.c ft_striter.c ft_striteri.c \
	ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_strsplit.c \
	ft_itoa.c \
	ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC2) $(SRC)
	ar rc $(NAME2) $(SRC2:.c=.o) $(SRC:.c=.o)
	gcc -Wall -Wextra -Werror -o $(NAME) main.c $(NAME2)

clean:
	rm -f $(SRC2:.c=.o) $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME2)

re: fclean all
