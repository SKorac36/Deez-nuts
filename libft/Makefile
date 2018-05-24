# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorac <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 09:00:33 by skorac            #+#    #+#              #
#    Updated: 2018/05/24 09:26:16 by skorac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COM  = gcc
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJS = *.o
HEAD = libft.h

$(NAME): $(HEAD)
	$(COM) -c $(FLAGS) $(SRC) -I $(HEAD)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
