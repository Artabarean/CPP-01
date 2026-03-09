# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/02 10:10:15 by atabarea          #+#    #+#              #
#    Updated: 2026/03/09 10:01:30 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Moar_brainz!
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= \
	Zombie.cpp \
	zombieHorde.cpp \
	main.cpp

OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)  

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re