CXX = c++

CXXFLAGS -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		Harl.cpp \

OBJ = $(SRC:.cpp=.o)

HDR = 	Harl.hpp

NAME = harl

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