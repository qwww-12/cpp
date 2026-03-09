#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) {}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &copy ) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=( const MutantStack<T> &op )
{
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack( ) {}

template <typename T>
MutantStack<T>::iterator   MutantStack<T>::begin( void )
{
    return (this->c.begin());
}

template <typename T>
MutantStack<T>::iterator    MutantStack<T>::end( void )
{
    return (this->c.end());
}
