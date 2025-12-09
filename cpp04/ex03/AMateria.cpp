#include "AMateria.hpp"

AMateria::AMateria( )
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria( std::string const &type ) : type(type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &copy ) : type(copy.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=( const AMateria &op )
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	return (*this);
}

AMateria::~AMateria( )
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType( void ) const
{
	return (type);
}

void	AMateria::use( ICharacter &target)
{
	(void)target;
}
