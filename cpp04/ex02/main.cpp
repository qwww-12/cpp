#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Dog *j = new Dog();
	const Cat *i = new Cat();

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	return (0);
}
