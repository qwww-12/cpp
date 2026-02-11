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
    if (str == "+inf" || str == "-inf" || str == "-inff" || str == "+inff" || str == "inf" || str == "inff"){
        log_inf( str[0] == '-' ? '-' : '+' );
        return ;
    }

    try {
        bool    error = false;
        double  Double = stodd(str, error);
        if (error == true)
            throw (std::invalid_argument("impossible"));
        if (Double > CHAR_MAX || Double < CHAR_MIN)
            std::cout << "char: impossible" << std::endl;
        else if (Double < 32 || Double > 126)
            std::cout << "char: Non displayable" << std::endl;
        else {
            char    Char = static_cast<char>(Double);
            std::cout << "char: '" << Char << "'" << std::endl;
        }
        if (Double > INT_MAX || Double < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(Double) << std::endl;

        log_FloatingPoint( Double );
    } catch (...) {
        std::cout   << "char: impossible" << std::endl
                    << "int: impossible" << std::endl
                    << "float: impossible" << std::endl
                    << "double: impossible" << std::endl;
    }
}
