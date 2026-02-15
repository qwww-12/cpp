#include "MateriaSource.hpp"

MateriaSource::MateriaSource( )
{
	for (int i = 0; i < 4; i++){
		memory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &copy )
{
	for (int i = 0; i < 4; i++){
		memory[i] = NULL;
		if (copy.memory[i])
			memory[i] = copy.memory[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &op )
{
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
			memory[i] = m;
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
