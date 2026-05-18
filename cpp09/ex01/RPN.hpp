#pragma once

#include "RPN.hpp"

#include <iostream>
#include <stack>

class   RPN{
    private:
        std::stack<int>     _stack;
    
    public:
        RPN( void );
        RPN( const RPN &copy );
        RPN &operator=( const RPN &op );
        ~RPN();
        void    _runRPN( char *math );
};