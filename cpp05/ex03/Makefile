CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 	main.cpp 		\
		Bureaucrat.cpp	\
		AForm.cpp		\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp		\
		PresidentialPardonForm.cpp	\
		Intern.cpp

OBJ = $(SRC:.cpp=.o)

HDR =	Bureaucrat.hpp	\
		AForm.hpp		\
		ShrubberyCreationForm.hpp	\
		RobotomyRequestForm.hpp		\
		PresidentialPardonForm.hpp	\
		Intern.hpp

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
