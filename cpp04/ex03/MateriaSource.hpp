#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*memory[4];

	public:
		MateriaSource( );
		MateriaSource( const MateriaSource &copy );
		MateriaSource &operator=( const MateriaSource &op );
		~MateriaSource( );

		void		learnMateria( AMateria *);
		AMateria	*createMateria( std::string const & );
};

#endif