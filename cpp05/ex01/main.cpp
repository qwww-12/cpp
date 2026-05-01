#include "Form.hpp"

int main()
{
	try{
		Bureaucrat b("B", 2);
		Form	f("fo", -89, 13);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	try{
		Bureaucrat b("B", 151);
		Form	f("fo", 45, 12);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Bureaucrat 	b1("oL", 89);
	Form		f1("Formmq", 88, 12);
	b1.signForm(f1);
	try{
		b1.BureaucratInc();
		b1.BureaucratDec();
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	b1.signForm(f1);
	Bureaucrat	b2("L", 150);
	try{
		b2.BureaucratDec();
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
