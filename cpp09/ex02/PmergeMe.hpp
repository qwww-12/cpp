#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <utility>
#include <exception>
#include <sys/time.h>
#include <algorithm>

class   PmergeMe {
	public:
		PmergeMe( );
		PmergeMe( const PmergeMe &copy );
		PmergeMe    &operator=( const PmergeMe &op );
		~PmergeMe();

		template <typename T>
		void	_befor(T &_cnt){
			std::cout << "Befor: ";
			for (typename T::iterator it = _cnt.begin(); it != _cnt.end(); it++){
				std::cout << " ";
				std::cout << *it;
			}
			std::cout << std::endl;
		}
		template <typename T>
		void	_after(T &_cnt){
			std::cout << "After: ";
			for (typename T::iterator it = _cnt.begin(); it != _cnt.end(); it++){
				std::cout << " ";
				std::cout << *it;
			}
			std::cout << std::endl;
		}
		template <typename T>
		T	_startAlgo(T _container){
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

			big = _startAlgo(big);

			for (size_t i = 0; i < small.size(); i++){
				typename T::iterator	it = std::lower_bound(big.begin(), big.end(), small.at(i));
				big.insert(it, small.at(i));
			}
			if (odd != -1){
				typename T::iterator	it = std::lower_bound(big.begin(), big.end(), odd);
				big.insert(it, odd);
			}
			return (big);
		};
};
