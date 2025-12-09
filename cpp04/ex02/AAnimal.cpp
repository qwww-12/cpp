#include "AAnimal.hpp"

AAnimal::AAnimal( )
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy ) : type(copy.type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=( const AAnimal &op )
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	return (*this);
}

AAnimal::~AAnimal( )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return (type);
}
