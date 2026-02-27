# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/26 14:16:15 by atabarea          #+#    #+#              #
#    Updated: 2026/02/27 16:11:15 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Zombie
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= \
	Zombie.cpp \
	newZombie.cpp \
	main.cpp \
	randomChump.cpp
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

.PHONY: clean fclean re bonus