#include "Cat.hpp"

Cat::Cat( ) : AAnimal( )
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat( const Cat &copy ) : AAnimal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain;
	for (int i = 0; i < 100; i++){
		brain->setIdeas(i, copy.brain->getIdeas(i));
	}
}

Cat	&Cat::operator=( const Cat &op )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	type = op.type;
	delete brain;
	brain = new Brain;
	for (int i = 0; i < 100; i++){
		brain->setIdeas(i, op.brain->getIdeas(i));
	}
	return (*this);
}

Cat::~Cat( )
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat sound: meow" << std::endl;
}
