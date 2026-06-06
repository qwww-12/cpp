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
            int _n;
            std::stringstream   ss(av[i]);
            ss >> _n;
            if (ss.fail())
                throw std::invalid_argument("Error: numbers not valid");
            if (_n < 0)
                throw std::invalid_argument("Error: just positive numbers");
	    for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++){
		    if (_n == *it)
	    		throw std::invalid_argument("Error: duplicate numbers");
	    }
	    _vec.push_back(_n);
            _deq.push_back(_n);
        }
	pm._befor(_vec);
	std::vector<int> v = pm._startAlgo(_vec);
	std::deque<int> q = pm._startAlgo(_deq);
    	pm._after(q);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
