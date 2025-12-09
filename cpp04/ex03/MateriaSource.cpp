#include "MateriaSource.hpp"

MateriaSource::MateriaSource( )
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		memory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &copy )
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		memory[i] = NULL;
		if (copy.memory[i])
			memory[i] = copy.memory[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &op )
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++){
		if (memory[i])
			delete memory[i];
		memory[i] = NULL;
		if (op.memory[i])
			memory[i] = op.memory[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource( )
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if (memory[i])
			delete memory[i];
	}
}

void	MateriaSource::learnMateria( AMateria *m )
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++){
		if (!memory[i])
		{
			memory[i] = m->clone();
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++){
		if (memory[i]->getType() == type)
			return (memory[i]->clone());
	}
	return (NULL);
}
