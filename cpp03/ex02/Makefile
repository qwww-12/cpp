CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

HDR = 	ClapTrap.hpp	\
		ScavTrap.hpp	\
		FragTrap.hpp

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