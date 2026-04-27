#include "ShrubberyCreationForm.hpp"


const char  *ShrubberyCreationForm::FileProbleme::what() const throw()
{
    return ("cannot open this file");
}

ShrubberyCreationForm::ShrubberyCreationForm( ) : AForm("ShrubberyCreationForm", 145, 137), target("Default")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) : AForm(copy), target(copy.target)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &op )
{
    std::cout << "ShrubberyCreationForm operator assaignment called" << std::endl;
    if (this != &op){
        AForm::operator=(op);
        target = op.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( )
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


void    ShrubberyCreationForm::action( void ) const{
	
    std::string	name = target + "_shrubbery";
    std::ofstream file(name.c_str());
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
