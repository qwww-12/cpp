#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>

class ScalarConverter
{
    private:
        ScalarConverter( );
        ScalarConverter( const ScalarConverter &copy );
        ScalarConverter &operator=( const ScalarConverter &op );
        ~ScalarConverter( );

    public:
        static void convert( std::string str );
};

void    log_NaN( void );
void    log_inf( char sign );

#endif