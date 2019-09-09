# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taethan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:35:24 by taethan           #+#    #+#              #
#    Updated: 2019/09/09 15:35:25 by taethan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	  valid.c \
	  put_figure_in_field.c \
	  square_size.c \
	  solution.c \

LIBFT = make -C libft/

all: $(NAME)

$(NAME):
	$(LIBFT)
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) ./libft/libft.a -I ./ -I ./libft/

clean:
	$(LIBFT) clean

fclean: clean
	$(LIBFT) fclean
	rm -f $(NAME)

re: fclean all
