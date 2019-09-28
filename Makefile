# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboris <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 15:19:08 by eboris            #+#    #+#              #
#    Updated: 2019/09/19 08:53:40 by eboris           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./
SRC = ft_*.c
OFILES  = ft_*.o 

all: $(NAME)

$(NAME):
		@gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
		@ar rc $(NAME) $(OFILES)
clean:
		@rm -rf $(OFILES) 

fclean: clean
		@rm -rf $(NAME)

re: fclean all
