#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string     target;

    public:

        class   FileProbleme : public std::exception{
            public:
                const char  *what() const throw(); 
        };

        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( const ShrubberyCreationForm &copy );
        ShrubberyCreationForm &operator=( const ShrubberyCreationForm &op );
        ~ShrubberyCreationForm();
        void	action( void ) const;
};

#endif