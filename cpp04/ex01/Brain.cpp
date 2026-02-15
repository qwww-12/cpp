#include "Brain.hpp"

Brain::Brain( )
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++){
		ideas[i] = copy.ideas[i];
	}
}

Brain	&Brain::operator=( const Brain &op )
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	for (int i = 0; i < 100; i++){
		ideas[i] = op.ideas[i];
	}
	return (*this);
}

Brain::~Brain( )
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdeas( int idx, std::string idea )
{
	ideas[idx] = idea;
}

std::string	Brain::getIdeas( int idx ) const
{
	return (ideas[idx]);
}
