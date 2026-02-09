#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Errors Arguments" << std::endl;
        return (1);
    }
    Replace rpl((std::string)av[1], (std::string)av[2], (std::string)av[3]);
    rpl.start_replace();
    return (0);
}
