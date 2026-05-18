#include "RPN.hpp"

int main(int ac, char **av){
    RPN rpn;
    if (ac != 2){
        std::cout << "Error: Arguments not valid" << std::endl;
        return 1;
    }
    try{
        rpn._runRPN(av[1]);
    } catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}