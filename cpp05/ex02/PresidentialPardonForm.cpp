#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( ) : AForm("PresidentialPardonForm", 25, 5), target("Default")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ) : AForm(copy), target(copy.target)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=( const PresidentialPardonForm &op )
{
    std::cout << "PresidentialPardonForm operator assignment called" << std::endl;
    if (this != &op){
        AForm::operator=(op);
        target = op.target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( )
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void    PresidentialPardonForm::action( void ) const
{
    std::cout << target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
