#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <utility>
#include <exception>
#include <sys/wait.h>
#include <algorithm>

class   PmergeMe {
	private:
		bool	_flagB;
		bool	_flagA;

	public:
		PmergeMe( );
		PmergeMe( const PmergeMe &copy );
		PmergeMe    &operator=( const PmergeMe &op );
		~PmergeMe();

		template <typename T>
		void    _startAlgo(T &_container){
			if (!_flagB){
				std::cout << "Befor: ";
				for (typename T::iterator it = _container.begin(); it != _container.end(); it++){
					std::cout << " ";
					std::cout << *it;
				}
				std::cout << std::endl;
				_flagB = true;
			}
			std::vector<std::pair<int, int> >	_p2;
			for (size_t i = 0; i + 1 < _container.size(); i += 2){
				int a = _container[i];
				int b = _container[i+1];
				if (a > b)
					_p2.push_back(std::make_pair(a, b));
				else
					_p2.push_back(std::make_pair(b, a));
			}
			int	odd[2];
			odd[0] = 0;
			odd[1] = 0;
			if (_container.size() % 2 == 1){
				odd[0] = 1;
		       		odd[1] = _container.back();
			}
			std::vector<int>	big;
			std::vector<int>	small;
			for (size_t i = 0; i < _p2.size(); i++){
				big.push_back(_p2[i].first);
				small.push_back(_p2[i].second);
			}
			std::sort(big.begin(), big.end());
			for (size_t i = 0; i < small.size(); i++){
				std::vector<int>::iterator	it = std::lower_bound(big.begin(), big.end(), small.at(i));
				big.insert(it, small.at(i));
			}
			if (odd[0] == 1){
				std::vector<int>::iterator	it = std::lower_bound(big.begin(), big.end(), odd[1]);
				big.insert(it, odd[1]);
			}
			if (!_flagA){
				std::cout << "After: ";
				for (std::vector<int>::iterator it = big.begin(); it != big.end(); it++){
					std::cout << " ";
					std::cout << *it;
				}
				std::cout << std::endl;
				_flagA = true;
			}
		};
};
