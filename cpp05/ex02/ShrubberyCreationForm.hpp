#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"
 // 		virtual void	excute(Bureaucrat const & executor) const = 0;

class ShrubberyCreationForm : public AForm // sign 145 // excute 137
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm( const ShrubberyCreationForm &copy );
        ShrubberyCreationForm &operator=( const ShrubberyCreationForm &op );
        ~ShrubberyCreationForm();
        void	excute( Bureaucrat const &executor ) const;
};

#endif