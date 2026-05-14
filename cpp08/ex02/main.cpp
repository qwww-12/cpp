#include "MutantStack.hpp"

int main( void )
{
    MutantStack<int>    mystack;

    mystack.push(90);
    std::cout << mystack.size() << std::endl;
}