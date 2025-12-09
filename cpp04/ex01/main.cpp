#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
// #include <unistd.h>

// void ll( void )
// {
// 	system ("leaks -q a.out");
// }

int main()
{
	// atexit(ll);
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	// sleep(10);
	return (0);
}
