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
        iterator    begin( void );
        iterator    end( void );
};

#include "MutantStack.tpp"
#endif