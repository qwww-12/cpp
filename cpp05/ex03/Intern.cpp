#include "Intern.hpp"

Intern::Intern( )
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern( const Intern &copy )
{
	(void)copy;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern	&Intern::operator=( const Intern &op )
{
	(void)op;
	std::cout << "Intern copy assignment operator" << std::endl;
	return *this;
}

Intern::~Intern( )
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::Obj_Robot( const std::string &target ) const{
	return new RobotomyRequestForm(target); 
}

AForm	*Intern::Obj_Pre( const std::string &target ) const{
	return new PresidentialPardonForm(target); 
}

AForm	*Intern::Obj_Shrubbery( const std::string &target ) const{
	return new ShrubberyCreationForm(target); 
}

AForm	*Intern::makeForm( const std::string &nform, const std::string &tform )
{
	std::string	all_forms[3] = {
		"robotomy request",
		"presidential pardon", 
		"shrubbery creation"
	};
	AForm	*(Intern::*ptr[3])( const std::string & ) const = {
		&Intern::Obj_Robot,
		&Intern::Obj_Pre,
		&Intern::Obj_Shrubbery
	};
	for (int idx = 0; idx < 3; idx++){
		if (all_forms[idx] == nform){
			std::cout << "Intern creates " << nform << std::endl;
			return (this->*ptr[idx])(tform);
		}
	}
	std::cout << "Intern fails creates " << nform << std::endl;
	return NULL;
}
