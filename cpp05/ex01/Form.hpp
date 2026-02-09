#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	name;
		bool				_signed;
		const int			grade_to_sign;
		const int			grade_to_excute;
	
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

		Form( );
		Form( const std::string name, const int grade_to_sign, const int grade_to_excute );
		Form( const Form &copy );
		Form &operator=( const Form &op );
		~Form( );

		std::string		getName( void ) const;
		bool			getSign( void ) const;
		int				getGrade_S( void ) const;
		int				getGrade_X( void ) const;
		void			beSigned( const Bureaucrat &b );
};

std::ostream &operator<<( std::ostream &out, const Form &f );

#endif