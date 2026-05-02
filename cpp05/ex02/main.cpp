#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::srand(time(NULL));
	try {
		Bureaucrat b("Bob", 150000);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b("Mr_b", 13);
	ShrubberyCreationForm x;

	b.signForm(x);
	x.execute(b);

	PresidentialPardonForm Pre("Pre_Form");
	b.executeForm(Pre);
	b.signForm(Pre);
	b.executeForm(Pre);

	Bureaucrat Bu("boss", 1);
	Bu.signForm(Pre);
	Bu.executeForm(Pre);

	RobotomyRequestForm Rob("Rob_Form");
	Bu.signForm(Rob);
	Bu.executeForm(Rob);
}
