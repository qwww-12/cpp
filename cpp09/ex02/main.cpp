#include "PmergeMe.hpp"

int main(int ac, char **av){
    std::vector<int>    _vec;
    std::deque<int>     _deq;
    PmergeMe            pm;


    if (ac == 1) {
        std::cerr << "Error: Numbers?" << std::endl;
        return (1);
    }
    try {
        for (int i = 1; i < ac; i++) {
            int     _tmpNumber;
            std::stringstream   ss(av[i]);
            ss >> _tmpNumber;
            if (ss.fail())
                throw std::invalid_argument("Error: numbers not valid");
            if (_tmpNumber < 0)
                throw std::invalid_argument("Error: just positive numbers");
            _vec.push_back(_tmpNumber);
            // _deq.push_back(_tmpNumber);
        }
        pm._startAlgo(_vec);
        // pm._startAlgo(_deq);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}