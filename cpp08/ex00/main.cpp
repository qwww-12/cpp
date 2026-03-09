#include "easyfind.hpp"

int main( void )
{
    try{
        std::vector<int> vec = {12, 23, 89, 90};
        easyfind(vec, 45);
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        std::array<int, 5> arr = {12, 89, 9, -9, 99};
        easyfind(arr, 12);
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        std::list<int> lkd = {89, 90, 999};
        easyfind(lkd, 999);
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return (0);
}