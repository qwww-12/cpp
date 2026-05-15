#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) {}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &copy ){
    (void)copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=( const MutantStack<T> &op )
{
    (void)op;
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack( ) {}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::begin( void ){
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end( void ){
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin( void ){
    return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend( void ){
    return (this->c.cend());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin( void ){
    return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend( void ){
    return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin( void ){
    return (this->c.crbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend( void ){
    return (this->c.crend());
}
