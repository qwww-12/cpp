#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( ) : AForm("RobotomyRequestForm", 72, 45), target("Default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ) : AForm(copy), target(copy.target)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &op )
{
    std::cout << "RobotomyRequestForm operator assignment called" << std::endl;
    if (this != &op){
	    AForm::operator=(op);
	    target = op.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( )
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void    RobotomyRequestForm::action( void ) const
{
    std::cout << "Vzzzzzzz Vzzzzzzzz.." << std::endl;
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " robotomy failed" << std::endl;
}
