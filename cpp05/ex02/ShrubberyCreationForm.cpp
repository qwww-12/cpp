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

void    ShrubberyCreationForm::action( Bureaucrat const &executor ) const{
    try{
        std::ofstream file(getName() + "_shrubbery");
        if (!file.is_open())
            throw std::runtime_error("can't create a file");
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
    catch (std::string &str){
        std::cout << str << std::endl;
    }
}