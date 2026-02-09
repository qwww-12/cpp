#include "AForm.hpp"

const char	*AForm::GradeTooHighException::what( ) const throw()
{
	return ("Form grade too high");
}

const char	*AForm::GradeTooLowException::what( ) const throw()
{
	return ("Form grade too low");
}

AForm::AForm( ) : name("default"), _signed(false), grade_to_sign(150), grade_to_excute(150)
{
	std::cout << "Form constructor called" << std::endl;
}

AForm::AForm( const std::string name, int grade_to_sign, int grade_to_excute ) : name(name), _signed(false), grade_to_sign(grade_to_sign), grade_to_excute(grade_to_excute)
{
	std::cout << "Form parameterized constructor called" << std::endl;
	if (grade_to_sign > 150 || grade_to_excute > 150)
		throw AForm::GradeTooLowException();
	else if (grade_to_sign < 1 || grade_to_excute < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm( const AForm &copy ) : name(copy.name), _signed(copy._signed), grade_to_sign(copy.grade_to_sign), grade_to_excute(copy.grade_to_excute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm	&AForm::operator=( const AForm &op )
{
	std::cout << "Form copy assingment  operator called" << std::endl;
	if (this == &op)
		return (*this);
	_signed = op._signed;
	return (*this);
}

AForm::~AForm( )
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	AForm::getName( void ) const
{
	return (name);
}

bool		AForm::getSign( void ) const
{
	return (_signed);
}

int			AForm::getGrade_S( void ) const
{
	return (grade_to_sign);
}

int			AForm::getGrade_X( void ) const
{
	return (grade_to_excute);
}

void		AForm::beSigned( const Bureaucrat &b )
{
	if (b.getGrade() > getGrade_S())
		throw Bureaucrat::GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<( std::ostream &out, const AForm &f )
{
	out << f.getName() << " Form signed grade " << f.getGrade_S();
	return (out);
}
