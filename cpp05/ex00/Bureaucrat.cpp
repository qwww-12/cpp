#include "Bureaucrat.hpp"

const char	*GradeTooHighException::what( ) const throw()
{
	return ("Grade too high");
}

const char	*GradeTooLowException::what( ) const throw()
{
	return ("Grade too low");
}

Bureaucrat::Bureaucrat( ) : name("Default"), grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : name(name), grade(grade)
{
	std::cout << "Parameterized constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) : name(copy.name), grade(copy.grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &op )
{
	std::cout << "Copy assingment operator called" << std::endl;
	if (this == &op )
		return (*this);
	grade = op.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( )
{
	std::cout << "Default destructor called" << std::endl;
}

std::string		Bureaucrat::getName( void ) const
{
	return (name);
}

int		Bureaucrat::getGrade( void ) const
{
	return (grade);
}

void	Bureaucrat::BureaucratInc( void )
{
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::BureaucratDec( void )
{
	grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<( std::ostream &out, const Bureaucrat &b )
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (out);
}
