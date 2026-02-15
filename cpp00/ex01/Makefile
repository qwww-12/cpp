CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = 	main.cpp				\
			Phonebook.cpp			\
			Contact.cpp 			\
			tools.cpp				\

HDR_FILE = main.hpp PhoneBook.hpp Contact.hpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ_FILE)
	$(CXX) $(CXXFLAGS) $(OBJ_FILE) -o $@

%.o: %.cpp $(HDR_FILE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILE)

fclean: clean
	rm -f $(NAME)

re: fclean all