#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class   Array
{
    private:
        T   *array;
        unsigned int el_array;

    public:
        Array( );
        Array( unsigned int n );
        Array( const Array &copy );
        Array &operator=( const Array &op );
        T   &operator[]( unsigned int index );
        T   operator[]( unsigned int index ) const;
        ~Array( );
        unsigned int size( void ) const;
};

template <typename T>
std::ostream    &operator<<(std::ostream &out, const Array<T> &op);

#include "Array.tpp"
#endif