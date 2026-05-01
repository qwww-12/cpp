#include "Form.hpp"

int main()
{
	try{
		Bureaucrat b5("rr", 2);
		Bureaucrat b1("Sif", 50);
		Bureaucrat b2("chunk", 50);
		Bureaucrat b3("abc", 0);
		Bureaucrat b4("d", -1);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form f("Bob", 40, 50);
		Form f2("Ssl", 89, 78);
		Form f4("Rt", 5, 12);
		Form f3("cb", -1, 12);
	} catch( std::exception &e ){
		std::cout << e.what() << std::endl;
	}

	try{
		Form f4("gh", 149, 151);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	b1.signForm(f);
	b2.signForm(f2);
	b5.signForm(f2);
	b1.signForm(f2);
	b5.signForm(f4);
}
