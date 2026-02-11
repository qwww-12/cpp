#include "Serializer.hpp"

int     main( )
{
    std::cout << "hello" << std::endl;
    Data    d1;
    Data    *d2 = &d1;

    uintptr_t   u = Serializer::serialize(d2);

    std::cout << "address of first struct" << &d1 << std::endl;
    std::cout << "address of first strucy by casting is" << u << std::endl;
}
