# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 16:42:14 by mouaammo          #+#    #+#              #
#    Updated: 2023/11/02 23:37:10 by mouaammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS 		=	-Wall -Wextra -Werror #-fsanitize=address
VERSION 	= 	-std=c++98
NAME 		= 	Intern
CCPP 		= 	c++
RM 			= 	rm -fr

FILES 			= main.cpp $(addprefix src/, Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
					RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp)
HEADER_FILES 	= $(addprefix inc/, Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp \
					RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp)

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
