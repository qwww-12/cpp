#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class	AForm;

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:

		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		Bureaucrat( );
		Bureaucrat( const std::string name, int grade );
		Bureaucrat( const Bureaucrat &copy );
		Bureaucrat &operator=( const Bureaucrat &op );
		~Bureaucrat( );
		std::string		getName( void ) const;
		int				getGrade( void ) const;
		
		void			BureaucratInc( void );
		void			BureaucratDec( void );
		void			signForm(  AForm &f );
};

std::ostream &operator<<( std::ostream &out, const Bureaucrat &b );

#endif