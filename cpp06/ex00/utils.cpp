#include "ScalarConverter.hpp"

void    log_NaN( void )
{
    std::cout   << "char: impossible" << std::endl
                << "int: impossible" << std::endl
                << "float: nanf" << std::endl
                << "double: nan" << std::endl;
}

void    log_inf( char sign )
{
    std::cout   << "char: impossible" << std::endl
                << "int: impossible" << std::endl
                << "float: " << sign << "inff" << std::endl
                << "double: " << sign << "inf" << std::endl;
}
