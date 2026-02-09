#include "Bureaucrat.hpp"

int		main( void )
{
	try {
		Bureaucrat b1("Sif", 0);
		std::cout << b1;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b2("M", 1);
		b2.BureaucratInc();
		std::cout << b2;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b3("Z", 150);
		b3.BureaucratDec();
		std::cout << b3;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b4("Y", 149);
		b4.BureaucratDec();
		std::cout << b4;
		b4.BureaucratInc();
		std::cout << b4;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
