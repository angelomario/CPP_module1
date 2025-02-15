# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquissan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 17:25:17 by aquissan          #+#    #+#              #
#    Updated: 2025/01/16 17:26:41 by aquissan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=job

FLAGS=-Wall -Wextra -Werror 
COMPILE=c++ -std=c++98

# DIRS
SRC_D=sources
OBJ_D=objects

RM=rm -rf 
Mk=mkdir -p 

FILES=  Account.cpp tests.cpp
SRC=$(addprefix $(SRC_D)/, $(FILES))
OBJ=$(addprefix $(OBJ_D)/, $(FILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILE) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_D)/%.o:$(SRC_D)/%.cpp
	@$(Mk) $(OBJ_D)
	$(COMPILE) $(FLAGS) -c $< -o $@ 

clean: 
	$(RM) $(OBJ)
	$(RM) $(OBJ_D)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: re
	clear
	./$(NAME)

push: fclean
	clear
	git status
	git add .
	git status
	git commit -m "done"
	git push

.PHONY: all re clean fclean

