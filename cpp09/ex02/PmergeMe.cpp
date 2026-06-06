#include "PmergeMe.hpp"

PmergeMe::PmergeMe( ) { }

PmergeMe::PmergeMe( const PmergeMe &copy ) { (void)copy; }

PmergeMe	&PmergeMe::operator=( const PmergeMe &op ) {
	(void)op;
	return (*this);
}

PmergeMe::~PmergeMe() {}
