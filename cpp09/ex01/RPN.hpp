#pragma once

#include "RPN.hpp"

#include <iostream>
#include <exception>
#include <sstream>
#include <stack>

class   RPN{
    private:
        class   BadNumbers : public std::exception{
            public:
                const char  *what() const throw();
        };
        std::stack<int>     _stack;
    
    public:
        RPN( void );
        RPN( const RPN &copy );
        RPN &operator=( const RPN &op );
        ~RPN();
        void    _runRPN( char *math );
};