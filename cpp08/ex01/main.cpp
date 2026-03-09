#include "Span.hpp"

static void test( void )
{
    std::vector<unsigned int> vec_int = {122, 34, 566, 23, 64, 23, 92, 7, 9, 1, 24, 89, 2};
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
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    test();
    bad_vector();
    return (0);
}
