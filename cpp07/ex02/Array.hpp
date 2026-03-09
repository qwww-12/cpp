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
        Array &operator[]( unsigned int index );
        ~Array( );
        unsigned int size( void ) const;
};

#include "Array.tpp"
#endif