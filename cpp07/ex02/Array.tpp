#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : array(NULL), el_array(0) { }

template <typename T>
Array<T>::Array( unsigned int n ) : el_array(n)
{
    array = new T[n]();
}

template <typename T>
Array<T>::Array( const Array &copy )
{
    array = new T[copy.size()];
    el_array = copy.size();
    for (unsigned int i = 0; i < el_array; i++){
        array[i] = copy.array[i];
    }
}

template <typename T>
Array<T>   &Array<T>::operator=( const Array<T> &op )
{
    if (this == &op)
        return (*this);
    delete[] array;
    array = new T[op.size()];
    el_array = op.size();
    for (unsigned int i = 0; i < el_array; i++){
        array[i] = op.array[i];
    }
    return (*this);
}

template <typename T>
T   &Array<T>::operator[]( unsigned int index )
{
    if (index >= size())
        throw (std::out_of_range("Index is out of range"));
    return (array[index]);
}

template <typename T>
T   Array<T>::operator[]( unsigned int index ) const
{
    if (index >= size())
        throw (std::out_of_range("Index is out of range"));
    return (array[index]);
}

template <typename T>
Array<T>::~Array( void )
{
    delete[] array;
}

template <typename T>
unsigned int Array<T>::size( void ) const
{
    return (el_array);
}

template <typename T>
std::ostream    &operator<<( std::ostream &out, const Array<T> &array){
    for (unsigned int i = 0; i < array.size(); i++){
        out << array[i];
    }
    return out;
}