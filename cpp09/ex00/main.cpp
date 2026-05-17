#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    BitcoinExchange btc;

    (void)av;
    if (ac != 2){
        std::cout << "Error: arguments not valid" << std::endl;
        return (1);
    }
    try{
        btc.execute();
    } catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
