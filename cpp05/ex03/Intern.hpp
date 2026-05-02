#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern {
	public:
		Intern( );
		Intern( const Intern &copy );
		Intern &operator=( const Intern &op );
		~Intern( );
		AForm	*Obj_Robot( const std::string &target ) const;
		AForm	*Obj_Pre( const std::string &target ) const;
		AForm	*Obj_Shrubbery( const std::string &target ) const;
		AForm	*makeForm( const std::string &nform, const std::string &tform );
};

#endif
