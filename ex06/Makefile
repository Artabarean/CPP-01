# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/05 11:08:21 by atabarea          #+#    #+#              #
#    Updated: 2026/03/09 12:49:54 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harlFilter
CXX			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= \
	main.cpp \
	Harl.cpp

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