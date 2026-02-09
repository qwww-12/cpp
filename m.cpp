#include "t.hpp"
#include <iostream>

void what( void )
{
	std::cout << "what" << std::endl;
}

int main()
{
	t onj;

	void (*p)() = &what;
	p();
	void (t::*ptr)() = &t::hello;
	(onj.*ptr)();
	ptr = &t::go;
	(onj.*ptr)();

	void (t::*py[2])() = { &t::hello,&t::go };

	(onj.*py[1])();
	(onj.*py[0])();

	std::cout << "===============================" << std::endl;

	int q = 9;

	int &ref = q;

	ref = 90;

	std::cout << "q = " << ref << std::endl;

	std::cout << &q << std::endl;
	std::cout << &ref << std::endl;



	std::cout << "===============================" << std::endl;


	const int &rf = 900;

	std::cout << rf << std::endl;

	int r = 8;
	const int &u = r;

	int yy = u;

	std::cout << rf << std::endl;
}
