#include "Dog.hpp"

Dog::Dog( ) : Animal( )
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=( const Dog &op )
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	return (*this);
}

Dog::~Dog( )
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog sound: bark" << std::endl;
}
