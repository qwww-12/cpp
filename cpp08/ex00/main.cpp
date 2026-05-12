#include "easyfind.hpp"

int main( void )
{
    try{
        std::vector<int> vec;
        vec.push_back(12);
        vec.push_back(23);
        vec.push_back(89);
        vec.push_back(90);
        easyfind(vec, 45);
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        std::vector<int> vec;
        vec.push_back(12);
        vec.push_back(89);
        vec.push_back(9);
        vec.push_back(-9);
        vec.push_back(99);
        easyfind(vec, 9);
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        std::list<int> lkd;
        lkd.push_back(89);
        lkd.push_back(90);
        lkd.push_back(999);
        easyfind(lkd, 999);
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return (0);
}