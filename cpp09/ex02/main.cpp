#include "PmergeMe.hpp"

int main(int ac, char **av){
    PmergeMe            pm;
    std::vector<int>	_vec;
    std::deque<int>	_deq;
    if (ac == 1) {
        std::cerr << "Error: Numbers?" << std::endl;
        return (1);
    }
    try {
        for (int i = 1; i < ac; i++) {
            long n;
            std::stringstream   ss(av[i]);
            ss >> n;
            if (ss.fail())
		    throw std::invalid_argument("Error: numbers not valid");
            if (n < 0)
		    throw std::invalid_argument("Error: just positive numbers");
	    if (n < INT_MIN || n > INT_MAX)
		    throw std::invalid_argument("Error: number is can't store in int");
	    for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++){
		    if (n == *it)
	    		throw std::invalid_argument("Error: duplicate numbers");
	    }
	    _vec.push_back(static_cast<int>(n));
            _deq.push_back(static_cast<int>(n));
        }
	pm.setVec(_vec);
	pm.setDeq(_deq);
	pm._printContainer(pm.getVec(), "Befor: ");
	pm._usingVector( );
	pm._usingDeque( );
    	pm._printContainer(pm.getDeq(), "After: ");
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
