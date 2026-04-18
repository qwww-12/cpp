#include "Serializer.hpp"

int     main( void )
{
    Data    *d2 = new Data;
    d2->value = 42;

    uintptr_t   u = Serializer::serialize(d2);
    Data        *d3 = Serializer::deserialize(u);


    std::cout << "address of d1: " << d2 << std::endl;
    std::cout << "number address: " << u << std::endl;
    std::cout << "address of d1 by d3: " << d3 << std::endl;
    std::cout << "variables value is: " << d3->value << std::endl;
    delete d2;
}
