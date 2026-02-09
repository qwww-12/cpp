#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	const WrongAnimal	*t1 = new WrongCat();
	const WrongCat		*t2 = new WrongCat();

	t1->makeSound();	
	t2->makeSound();

	delete t1;
	delete t2;
	return (0);
}
