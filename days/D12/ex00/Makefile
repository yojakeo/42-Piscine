# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: japarbs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/24 16:18:42 by japarbs           #+#    #+#              #
#    Updated: 2019/01/24 16:18:43 by japarbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFLAGS = -Wall -Werror -Wextra
DEPS = libft.a
OBJ = ft_putstr.o ft_display_file.o main.o
SRCF = ft_putstr.c  ft_display_file.c main.c
INC = ft_lib.h

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRCF) -I $(INC)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

