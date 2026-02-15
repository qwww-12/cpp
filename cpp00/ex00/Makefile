CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = megaphone.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ_FILE)
	$(CXX) $(CXXXFLAGS) $(OBJ_FILE) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILE)

fclean: clean
	rm -f $(NAME)

re: fclean all