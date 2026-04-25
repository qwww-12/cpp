#include "ShrubberyCreationForm.hpp"

const char  *ShrubberyCreationForm::FileProbleme::what() const throw()
{
    return ("cannot open this file");
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Default", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) : AForm(copy)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &op ){
    AForm::operator=(op);
    std::cout << "ShrubberyCreationForm operator assaignment called" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( )
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


void    ShrubberyCreationForm::action( void ) const{
    std::ofstream file(target + "_shrubbery");
    if (!file.is_open())
        throw FileProbleme();
    file << "       _-_," << std::endl;
    file << " /~~         ~~\\" << std::endl;
    file << "    /~~   ~~\\" << std::endl;
    file << "{               }" << std::endl;
    file << " \\  _-     -_  /" << std::endl;
    file << "   ~  \\\\ //  ~" << std::endl;
    file << "_- -   | | _- _" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "      // \\\\" << std::endl;
}
