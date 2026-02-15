#include "Base.hpp"

Base    *generate( void )
{
	Base    *base;
	int     random;
 
	random = rand() % 3 + 1;
	if (random == 1)
		base = new A();
	else if (random == 2)
		base = new B();
	else
		base = new C();
	return (base);
}

void    identify( Base *p )
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);

	if (a != NULL) {
		std::cout << "A" << std::endl;
		return ;
	}
	if (b != NULL){
		std::cout << "B" << std::endl;
		return ;
	}
	std::cout << "C" << std::endl;
}

void identify( Base &p )
{
	try{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	} catch (...){ }
	try{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	} catch (...){ }
	std::cout << "C" << std::endl;
}