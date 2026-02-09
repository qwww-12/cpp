CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp 		\
		ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

HDR =	ScalarConverter.hpp

NAME = convert

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