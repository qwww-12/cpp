#include "ScalarConverter.hpp"

int main( int ac, char **av )
{
    (void)av;
    if (ac != 2){
        std::cout << "Arguments not valid" << std::endl;
        return (0);
    }

    ScalarConverter::convert(av[1]);
}
