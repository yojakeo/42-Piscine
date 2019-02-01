# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gachan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 15:18:50 by gachan            #+#    #+#              #
#    Updated: 2019/01/28 15:31:47 by gachan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = 
INCLUDES = -I ./$(PATH)
PATH = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) $(INCLUDES)

fclean: clean
	rm -f $(NAME)

re: fclean all
