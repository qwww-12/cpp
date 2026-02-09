CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp 		\
		Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

HDR =	Bureaucrat.hpp

NAME = a.out

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