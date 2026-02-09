#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( )
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( )
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void    ShrubberyCreationForm::Required_grades( const Bureaucrat &b, const AForm &f )
{
    try {
        if (b.getGrade() > 145 && b.getGrade() && f.getGradeX() > 137)
            throw ;
    }
}
