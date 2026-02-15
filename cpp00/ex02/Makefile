CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

NAME = account

HDR = Account.hpp

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