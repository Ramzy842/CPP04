# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 21:49:21 by rchahban          #+#    #+#              #
#    Updated: 2023/12/16 21:50:05 by rchahban         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CPP = c++

# Compiler flags
CPPFLAGS = -Werror -Wall -Wextra -std=c++98

# Includes (.hpp)
INCLUDES = -I./includes

# Source files
SRC = main.cpp ./src/AMateria.cpp ./src/Character.cpp ./src/Cure.cpp ./src/Ice.cpp ./src/ICharacter.cpp ./src/IMateriaSource.cpp ./src/MateriaSource.cpp

# Object files generated from source files
OBJ = $(SRC:.cpp=.o)

# Name of the main executable to be generated
NAME = main

# Default target to be built
all: $(NAME)

# Rule to generate the main executable from the object files
$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

# Rule to generate the object files from the source files
%.o: %.cpp
	$(CPP) $(CPPFLAGS) $(INCLUDES) -c $< -o $@

# Clean target to remove generated files
clean:
	rm -f $(OBJ)

# Fclean target to remove executable files and finally perform clean
fclean: clean
	rm -f $(NAME)

# Re target to rebuild the project from scratch
re: fclean all

.PHONY: all clean fclean re