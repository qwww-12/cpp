#include "PmergeMe.hpp"

PmergeMe::PmergeMe( ) { }

PmergeMe::PmergeMe( const PmergeMe &copy ) : _vec(copy._vec), _deq(copy._deq) { }

PmergeMe	&PmergeMe::operator=( const PmergeMe &op ) {
	if (this != &op){
		_vec = op._vec;
		_deq = op._deq;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe( const std::vector<int> &_externalVec ) : _vec(_externalVec) { }

PmergeMe::PmergeMe( const std::deque<int> &_externalDeq ) : _deq(_externalDeq) { }

PmergeMe::PmergeMe( const std::vector<int> &_externalVec, const std::deque<int> &_externalDeq ) : _vec(_externalVec), _deq(_externalDeq) { }

void	PmergeMe::setVec( const std::vector<int> &_externalVec ) {
	_vec = _externalVec;
}

void	PmergeMe::setDeq( const std::deque<int> &_externalDeq ) {
	_deq = _externalDeq;
}

void	PmergeMe::_usingVector( void ) {
	_vec = _algoFord(_vec);
}

void	PmergeMe::_usingDeque( void ) {
	_deq = _algoFord(_deq);
}

std::vector<int>	&PmergeMe::getVec( void ) {
	return (_vec);
}

std::deque<int>		&PmergeMe::getDeq( void ) {
	return (_deq);
}
