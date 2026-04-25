#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm( const ShrubberyCreationForm &copy );
        ShrubberyCreationForm &operator=( const ShrubberyCreationForm &op );
        ~ShrubberyCreationForm();
        void	action( Bureaucrat const &executor ) const;
};

#endif