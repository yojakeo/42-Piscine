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

NAME = eval_expr
CFLAGS = -Wall -Werror -Wextra
SRCF = srcs/ft_ascii.c srcs/evalexpr.c srcs/ft_helper.c
INC = includes/ft_lib.h

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) main.c $(SRCF) -I $(INC)

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
