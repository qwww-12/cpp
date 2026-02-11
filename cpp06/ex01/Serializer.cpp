#include "Serializer.hpp"

Serializer::Serializer( void ) { }

Serializer::Serializer( const Serializer &copy ) { }

Serializer  &Serializer::operator=( const Serializer &op )
{
    return (*this);
}

Serializer::~Serializer( void ) { }

uintptr_t   Serializer::serialize( Data *ptr )
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   Serializer::deserialize( uintptr_t raw )
{
    return ( reinterpret_cast<Data *>(raw));
}