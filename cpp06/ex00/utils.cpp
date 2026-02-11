#include "ScalarConverter.hpp"

double  stodd( std::string str , bool &error)
{
    size_t  pos;
    double  d = std::stod(str, &pos);

    if (pos != str.length())
    {
        if (str.length() - pos == 1 && str[pos] == 'f')
            return (d);
        error = true;
        return (d);
    }
    return (d);
}

void    log_FloatingPoint( double Double )
{
    std::cout << "float: " << static_cast<float>(Double);
    if (std::trunc(Double) == Double)
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: " << Double;
    if (Double == std::trunc(Double))
        std::cout << ".0";
    std::cout << std::endl;
}

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
