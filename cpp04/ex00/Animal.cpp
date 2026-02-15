#include "Animal.hpp"

Animal::Animal( )
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal &copy ) : type(copy.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal &op )
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	return (*this);
}

Animal::~Animal( )
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal sound: no-Sound" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (type);
}
