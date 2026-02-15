#include "WrongCat.hpp"

WrongCat::WrongCat( ) : WrongAnimal( )
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &op )
{
	std::cout << "WrongCat copy assignment operator called"<< std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	return (*this);
}

WrongCat::~WrongCat( )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat sound" << std::endl;
}
