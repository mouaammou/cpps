# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 16:42:14 by mouaammo          #+#    #+#              #
#    Updated: 2023/10/08 20:12:27 by mouaammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS 		=	-Wall -Wextra -Werror #-fsanitize=address
VERSION 	= 	-std=c++98
NAME 		= 	Form
CCPP 		= 	c++
RM 			= 	rm -fr

FILES 			= $(addprefix src/, Bureaucrat.cpp Form.cpp) main.cpp
HEADER_FILES 	= $(addprefix inc/, Bureaucrat.hpp Form.hpp)

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
