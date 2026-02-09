#include "Form.hpp"

int main()
{
	Bureaucrat b1("Sif", 50);
	Bureaucrat b2("chunk", 50);

	Form f("Bob", 40, 10);
	Form f2("Ssl", 89, 10);

	b1.signForm(f);
	b2.signForm(f2);
}
