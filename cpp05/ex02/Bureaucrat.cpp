#include "Bureaucrat.hpp"
#include "AForm.hpp"

const char	*Bureaucrat::GradeTooHighException::what( ) const throw()
{
	return ("Bureaucrat grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what( ) const throw()
{
	return ("Bureaucrat grade too low");
}

Bureaucrat::Bureaucrat( ) : name("Default"), grade(150)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : name(name), grade(grade)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) : name(copy.name), grade(copy.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &op )
{
	std::cout << "Bureaucrat copy assingment operator called" << std::endl;
	if (this == &op )
		return (*this);
	grade = op.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( )
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string		Bureaucrat::getName( void ) const
{
	return (name);
}

int				Bureaucrat::getGrade( void ) const
{
	return (grade);
}

void	Bureaucrat::BureaucratInc( void )
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::BureaucratDec( void )
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<( std::ostream &out, const Bureaucrat &b )
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}

void	Bureaucrat::signForm( AForm &f )
{
	try {
		f.beSigned(*this);
		std::cout << *this << " signed " << f << std::endl;
	}
	catch (std::exception &e) {
		std::cout << *this << " couldn't sign " << f << " beacause: "<<  e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const &form ) const
{
	try {
		form.execute(*this);
		std::cout << getName()<< " excuted " << form.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << getName() << " can't execute " << form.getName() << " because: ";
		if (!form.getSign()) std::cout << "not sign" << std::endl;
		else std::cout << e.what() << std::endl;
	}
}
