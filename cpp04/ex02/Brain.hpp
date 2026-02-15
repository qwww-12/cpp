#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain( );
		Brain( const Brain &copy );
		Brain &operator=( const Brain &op );
		~Brain( );

		void		setIdeas( int idx, std::string idea );
		std::string	getIdeas( int idx ) const;
};

#endif