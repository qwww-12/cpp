CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp \

OBJ = $(SRC:.cpp=.o)

HDR =	MutantStack.hpp

TPL = MutantStack.tpp

NAME = MutantStack

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp $(HDR) $(TPL)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all