CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp			\
		AMateria.cpp		\
		Character.cpp		\
		Cure.cpp			\
		Ice.cpp				\
		MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HDR = 	AMateria.hpp		\
		Character.hpp		\
		Cure.hpp			\
		Ice.hpp				\
		ICharacter.hpp		\
		ImateriaSource.hpp	\
		MateriaSource.hpp

NAME = a.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all