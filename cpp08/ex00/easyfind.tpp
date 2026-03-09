#include "easyfind.hpp"

template <typename T>
void    easyfind( T &cnt, int val )
{
    for (typename T::iterator it = cnt.begin(); it != cnt.end(); it++){
        if (*it == val){
            std::cout << "The value: " << val << " is exist in container" << std::endl;
            return ;
        }
    }
    throw std::runtime_error("The value is not exist in container");
}
