#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <utility>
#include <exception>
#include <sys/time.h>
#include <algorithm>
#include <climits>

class   PmergeMe {
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		template <typename T>
		T	_algoFord(T _container){
			if (_container.size() <= 1)
				return _container;

			std::vector<std::pair<int, int> >	_p2;
			for (size_t i = 0; i + 1 < _container.size(); i += 2){
				int a = _container[i];
				int b = _container[i+1];
				if (a > b)
					_p2.push_back(std::make_pair(a, b));
				else
					_p2.push_back(std::make_pair(b, a));
			}

			int odd = -1;
			if (_container.size() % 2 == 1)
		       		odd = _container.back();

			T	big;
			T	small;
			for (size_t i = 0; i < _p2.size(); i++){
				big.push_back(_p2[i].first);
				small.push_back(_p2[i].second);
			}

			big = _algoFord(big);

			T	order;
			order.push_back(0);
			
			size_t a = 1;
			size_t b = 3;
			while (a < small.size()){
				for (long long k = static_cast<long long>(b); --k >= static_cast<long long>(a); ){
					if (k < static_cast<long long>(small.size()))
						order.push_back(k);
				}
				size_t c = b + 2 * a;
				a = b;
				b = c;
			}
			for (size_t i = 0; i < order.size(); i++){
				typename T::iterator it = std::lower_bound(big.begin(), big.end(), small[order[i]]);
				big.insert(it, small[order[i]]);
			}
			
			if (odd != -1){
				typename T::iterator it = std::lower_bound(big.begin(), big.end(), odd);
				big.insert(it, odd);
			}
			return (big);
		};

	public:
		PmergeMe( );
		PmergeMe( const std::vector<int> &_externalVec );
		PmergeMe( const std::deque<int> &_externalDeq );
		PmergeMe( const std::vector<int> &_externalVec, const std::deque<int> &_externalDeq );
		PmergeMe( const PmergeMe &copy );
		PmergeMe    &operator=( const PmergeMe &op );
		~PmergeMe();

		void	setVec( const std::vector<int> &externalVec );
		void	setDeq( const std::deque<int> &externalDeq );
		void	_usingVector( void );
		void	_usingDeque( void );
		std::vector<int>	&getVec( void );
		std::deque<int>		&getDeq( void );
		template <typename T>
		void	_printContainer(T &_cnt, const std::string &str) {
			std::cout << str;
			for (typename T::iterator it = _cnt.begin(); it != _cnt.end(); it++){
				std::cout << " ";
				std::cout << *it;
			}
			std::cout << std::endl;
		}
};
