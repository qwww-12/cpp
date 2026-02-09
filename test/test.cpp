
#include "test.hpp"
#include <iostream>

Test::Test() {
    std::cout << "constructor called" << std::endl;
}

Test::~Test( )
{
    std::cout << "destructor called" << std::endl;
}

