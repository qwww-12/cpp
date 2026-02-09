#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) { }

ScalarConverter::ScalarConverter( const ScalarConverter &copy ) 
{ 
    (void)copy;
}

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &op )
{
    (void)op;
    return (*this);
}

ScalarConverter::~ScalarConverter( void ) { }

void    ScalarConverter::convert( std::string str )
{
    if (str == "nan" || str == "nanf") {
        log_NaN( );
        return ;
    }
    if (str == "+inf" || str == "-inf" || str == "-inff" || str == "+inff"){
        log_inf( str[0] );
        return ;
    }

    double  Double = std::stod(str);
    char    Char = static_cast<char>(Double);

    if (Char < 32 || Char > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << Char << "'" << std::endl;

    if (Double > 2147483647 || Double < -2147483648)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(Double) << std::endl;

    std::cout << "float: " << static_cast<float>(Double) << std::endl;
    std::cout << "double: " << Double << std::endl;
}
