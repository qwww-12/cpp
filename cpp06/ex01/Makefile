CXX = c++

# CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp	\
		Serializer.cpp

OBJ =	$(SRC:.cpp=.o)

HDR =	Serializer.hpp	\
		Data.hpp

NAME = Serial

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