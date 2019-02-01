# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: japarbs <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 14:24:21 by japarbs           #+#    #+#              #
#    Updated: 2019/01/22 14:24:23 by japarbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CFLAGS = -Wall -Werror -Wextra
OBJ = ft_putchar.o ft_atoi.o ft_putnbr.o
SRCF = srcs/ft_putchar.c srcs/ft_atoi.c srcs/ft_putnbr.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) main.c $(SRCF)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
