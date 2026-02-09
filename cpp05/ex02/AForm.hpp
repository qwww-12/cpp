#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class   AForm
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

		AForm( );
		AForm( const std::string name, const int grade_to_sign, const int grade_to_excute );
		AForm( const AForm &copy );
		AForm &operator=( const AForm &op );
		~AForm( );

		std::string		getName( void ) const;
		bool			getSign( void ) const;
		int				getGrade_S( void ) const;
		int				getGrade_X( void ) const;
		void			beSigned( const Bureaucrat &b );
};

std::ostream &operator<<( std::ostream &out, const AForm &f );

#endif