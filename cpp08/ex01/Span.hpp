#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class   Span
{
    private:
        std::vector<unsigned int>   vec;
        unsigned int                N;

    public:
        Span( );
        Span( unsigned int size );
        Span( const Span &copy );
        Span &operator=(const Span &op );
        ~Span( );
        void    addNumber( unsigned int val );
        void    moreNumbers( std::vector<unsigned int>::iterator it_b, std::vector<unsigned int>::iterator it_e);
        int     shortestSpan( void );
        int     longestSpan( void );
        void    printvec( void ) const;
};

#endif