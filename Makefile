# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 12:30:22 by lvasseur          #+#    #+#              #
#    Updated: 2016/12/15 14:27:09 by lvasseur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

NAME2 = fillit.a

SRC = ft_backtracking.c ft_checkmat.c ft_coord.c ft_delete_first.c ft_initcursor.c \
	ft_is_that_ok.c ft_isole_pieces.c ft_isvalid_all.c ft_malltab.c ft_morph_to_piece.c \
	ft_n_or_o.c ft_number_of_pieces.c ft_putpiece.c ft_resetp.c ft_size_tab.c \
	ft_solverfillit.c ft_tabfree.c ft_tabdup.c ft_tabprint.c ft_tabset.c is_k.c \
	is_there_invalid.c max_xy.c my_main.c number_of_char.c

SRC2 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c \
	ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	ft_strcmp.c ft_strncmp.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_strsplit.c \
	ft_itoa.c \
	ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

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
