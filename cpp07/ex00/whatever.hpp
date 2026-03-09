#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename Tp>
void swap(Tp &a, Tp &b)
{
    Tp c = a;
    a = b;
    b = c;
}

template <typename Tp>
Tp min(Tp a, Tp b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename Tp>
Tp  max(Tp a, Tp b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif