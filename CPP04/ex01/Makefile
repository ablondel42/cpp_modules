# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 17:05:08 by ablondel          #+#    #+#              #
#    Updated: 2022/01/26 17:38:47 by ablondel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS =	-Wall -Wextra -Werror -std=c++98
CXX =		clang++ $(CFLAGS)

SRC = 	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp \

OBJ =	$(SRC:.cpp=.o)
 
NAME = Brain

$(NAME):	$(OBJ)
			$(CXX) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
