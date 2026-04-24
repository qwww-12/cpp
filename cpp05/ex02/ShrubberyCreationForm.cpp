#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( )
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy )
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &op ){
    std::cout << "ShrubberyCreationForm operator assaignment called" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( )
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void    ShrubberyCreationForm::excute( Bureaucrat const &executor ) const{
    try{
        if (getGrade_S() == 145 && getGrade_X() == 137)
        {
            std::ofstream file(getName() + "_shrubbery");
            if (!file.is_open())
                throw std::runtime_error("can't create a file");
        }
    }
}