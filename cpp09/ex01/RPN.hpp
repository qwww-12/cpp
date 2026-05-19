#pragma once

#include "RPN.hpp"

#include <iostream>
#include <exception>
#include <sstream>
#include <stack>

class   RPN{
    private:
        bool    is_operator( std::string str ) const;

        class   BadNumbers : public std::exception{
            public:
                const char  *what() const throw();
        };
        class   BadOperator : public std::exception{
            public:
                const char  *what() const throw();
        };
        class   BadStack : public std::exception{
            public:
                const char  *what() const throw();
        };
        class   BadRPNSynatx : public std::exception{
            public:
                const char  *what() const throw();
        };
        class   NumberNotValid : public std::exception{
            public:
                const char  *what() const throw();
        };
        class   DivisionFail : public std::exception{
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