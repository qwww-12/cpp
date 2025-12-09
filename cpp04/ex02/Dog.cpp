#include "Dog.hpp"

Dog::Dog( ) : AAnimal( )
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog( const Dog &copy ) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain;
	for (int i = 0; i < 100; i++){
		brain->setIdeas(i, copy.brain->getIdeas(i));
	}
}

Dog	&Dog::operator=( const Dog &op )
{
	std::cout << "Dog copy assignment operator called" << std::endl;
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

Dog::~Dog( )
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog sound: bark" << std::endl;
}
