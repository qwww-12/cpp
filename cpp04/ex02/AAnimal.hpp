#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class	AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal( );
		AAnimal( const AAnimal &copy );
		AAnimal &operator=( const AAnimal &op );
		virtual ~AAnimal( );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const = 0;
};

#endif