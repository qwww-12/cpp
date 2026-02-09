#include "Cat.hpp"

Cat::Cat( ) : Animal( )
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=( const Cat &op )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	return (*this);
}

Cat::~Cat( )
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat sound: meow" << std::endl;
}
