#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <exception>
#include <sys/wait.h>

class   PmergeMe {
    public:
        PmergeMe( );
        PmergeMe( const PmergeMe &copy );
        PmergeMe    &operator=( const PmergeMe &op );
        ~PmergeMe();

        template <typename T>
        void    _startAlgo( const T &c){
            
        };
};