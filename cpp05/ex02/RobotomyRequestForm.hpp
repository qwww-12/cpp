#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp";

class RobotomyRequestForm : public AForm {
    private:
        std::string target;

    public:
        RobotomyRequestForm( );
        RobotomyRequestForm( const std::string &target );
        RobotomyRequestForm( const RobotomyRequestForm &copy );
        RobotomyRequestForm &operator=( const RobotomyRequestForm &op );
        ~RobotomyRequestForm( );
        void	action( void ) const;
};

#endif