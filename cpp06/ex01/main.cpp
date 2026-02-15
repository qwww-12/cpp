#include "Serializer.hpp"

int     main( void )
{
    Data    *d2 = NULL;

    uintptr_t   u = Serializer::serialize(d2);
    Data        *d3 = Serializer::deserialize(u);

    std::cout << "address of d1: " << d2 << std::endl;
    std::cout << "number address: " << u << std::endl;
    std::cout << "address of d1 by d3: " << d3 << std::endl;
}
