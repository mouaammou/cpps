# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 16:17:04 by mouaammo          #+#    #+#              #
#    Updated: 2023/12/27 20:26:25 by mouaammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS 		=	-Wall -Wextra -Werror #-g -fsanitize=address
VERSION 	= 	-std=c++98
NAME 		= 	Array
CCPP 		= 	c++
RM 			= 	rm -fr

FILES 			= main.cpp
HEADER_FILES 	= Array.hpp Array.tpp 

OBJECT_FILES = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	@$(CCPP) $(VERSION) $(FLAGS)  $(OBJECT_FILES) -o $(NAME)
	@printf "\n\033[1;36m ───────────── Done ──────────── \033[0m\n\n"


%.o:%.cpp $(HEADER_FILES) Makefile
	@$(CCPP) $(VERSION) $(FLAGS) -c $< -o $@
	@printf "\033[1;36m Compiling \033[0m $< \033[1;36m√\033[0m\n"

clean:
	$(RM) $(OBJECT_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all fclean clean re
