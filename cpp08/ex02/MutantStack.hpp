#ifndef MUTANTSTACK
# define MUTANTSTACK

#include <iostream>
#include <stack>

template <typename T>
class   MutantStack : public std::stack<T>
{
    public:
        MutantStack( );
        MutantStack( const MutantStack &copy );
        MutantStack &operator=( const MutantStack &op );
        ~MutantStack( );

        typedef typename std::stack<T>::container_type::iterator    iterator;
        typedef typename std::stack<T>::container_type::const_iterator    const_iterator;
        iterator    begin( void );
        iterator    end( void );
        const_iterator    cbegin( void );
        const_iterator    cend( void );
};

#include "MutantStack.tpp"
#endif