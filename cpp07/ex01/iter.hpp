#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename Tp, typename Func>
void    iter(Tp *a, const int b, Func c)
{
    for (int i = 0; i < b; i++){
        c(a[i]);
    }
}

#endif