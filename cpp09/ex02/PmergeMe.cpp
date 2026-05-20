#include "PmergeMe.hpp"

PmergeMe::PmergeMe( ) : _flagB(false), _flagA(false) {}

PmergeMe::PmergeMe( const PmergeMe &copy ) : _flagB(copy._flagB), _flagA(copy._flagA) { }

PmergeMe	&PmergeMe::operator=( const PmergeMe &op ) {
	if (this != &op){
		_flagB = op._flagB;
		_flagA = op._flagA;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}