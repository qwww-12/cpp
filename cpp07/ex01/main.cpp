#include "iter.hpp"

void    printInt(const int &var)
{
    std::cout << var;
}

void    incInt(int &var)
{
    var++;
    std::cout << var << " ";
}

void    printChar(const char &var)
{
    std::cout << var;
}

void    incChar(char &var)
{
    var++;
}

int main( void )
{
    int     array_int[] = {1336, 20, 41};
    char    array_char[] = "sif";

    iter(array_int, 3, incInt);
    std::cout << std::endl;

    iter(array_char, 3, printChar);
    std::cout << std::endl;
}