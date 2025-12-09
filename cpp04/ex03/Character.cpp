#include "Character.hpp"

Character::Character( ) : name("Default")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		invatory[i] = NULL;
	}
	for (int i = 0; i < 10; i++){
		dropped[i] = NULL;
	}
}

Character::Character( std::string name ) : name(name)
{
	std::cout << "Character parametrized constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		invatory[i] = NULL;
	}
	for (int i = 0; i < 10; i++){
		dropped[i] = NULL;
	}
}

Character::Character( const Character &copy ) : name(copy.name)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		invatory[i] = NULL;
		if (copy.invatory[i])
			invatory[i] = copy.invatory[i]->clone();
	}
	for (int i = 0; i < 10; i++){
		dropped[i] = NULL;
		if (copy.dropped[i])
			dropped[i] = copy.dropped[i];
	}
}

Character	&Character::operator=( const Character &op )
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	name = op.name;
	for (int i = 0; i < 4; i++){
		if (invatory[i])
			delete invatory[i];
		invatory[i] = NULL;
		if (op.invatory[i])
			invatory[i] = op.invatory[i]->clone();
	}
	for (int i = 0; i < 10; i++){
		if (dropped[i])
			delete dropped[i];
		dropped[i] = NULL;
		if (op.dropped[i])
			dropped[i] = op.dropped[i];
	}
	return (*this);
}

Character::~Character( )
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if (invatory[i])
			delete invatory[i];
	}
	for (int i = 0; i < 10; i++){
		if (dropped[i])
			delete dropped[i];
	}
}

std::string const	&Character::getName( void ) const
{
	return (name);
}

void	Character::equip( AMateria *m )
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++){
		if (!invatory[i])
		{
			invatory[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		return ;
	Drops(invatory[idx]);
	invatory[idx] = NULL;
}

void	Character::use( int idx, ICharacter &target )
{
	if (idx < 0 || idx > 3 || !invatory[idx])
		return ;
	invatory[idx]->use( target );
}

void	Character::Drops( AMateria *m )
{
	for (int i = 0; i < 10; i++){
		if (!dropped[i])
		{
			dropped[i] = m;
			return ;
		}
	}
	for (int i = 0; i < 10; i++){
		delete dropped[i];
		dropped[i] = NULL;
	}
	dropped[0] = m;
}
