#include "Span.hpp"

static void test( void )
{
    std::vector<unsigned int> vec_int;
    vec_int.push_back(122);
    vec_int.push_back(34);
    vec_int.push_back(566);
    vec_int.push_back(23);
    vec_int.push_back(64);
    vec_int.push_back(23);
    vec_int.push_back(92);
    vec_int.push_back(7);
    vec_int.push_back(9);
    vec_int.push_back(1);
    vec_int.push_back(24);
    vec_int.push_back(89);
    vec_int.push_back(2);
    Span            sp((unsigned int)vec_int.size());
    try{
        sp.moreNumbers(vec_int.begin(), vec_int.end());
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    sp.printvec();
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
}

static void bad_vector( void )
{
    try{
        Span    sp(1);
        sp.addNumber(89);
        std::cout << sp.shortestSpan() << std::endl;
    } catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        Span    sp(0);
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

int main( void )
{
    Span sp = Span(2);

    try{
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    test();
    bad_vector();
    return (0);
}
