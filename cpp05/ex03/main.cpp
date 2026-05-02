#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Intern intern;
    Bureaucrat boss("Boss", 1);
    Bureaucrat M_b("M_b", 50);

    AForm *form = intern.makeForm("shrubbery creation", "home");

    if (form)
    {
        boss.signForm(*form);
        boss.executeForm(*form);
        delete form;
    }

    form = intern.makeForm("test_f", "mi");
    if (form){
        boss.signForm(*form);
        boss.executeForm(*form);
        delete form;
    }

    form  = intern.makeForm("robotomy request", "zZ");
    if (form){
        M_b.signForm(*form);
        M_b.executeForm(*form);
        delete form;
    }
    return 0;
}
