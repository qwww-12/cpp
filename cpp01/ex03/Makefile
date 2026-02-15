CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	HumanA.cpp	\
		HumanB.cpp 	\
		Weapon.cpp 	\
		main.cpp

OBJ = $(SRC:.cpp=.o)

HDR = 	HumanA.hpp 	\
		HumanB.hpp 	\
		Weapon.hpp

NAME = Weapon

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all