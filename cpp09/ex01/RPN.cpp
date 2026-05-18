#include "RPN.hpp"

RPN::RPN( void ) {}

RPN::RPN( const RPN &copy ) : _stack(copy._stack) {}

RPN	&RPN::operator=( const RPN &op ){
	if (this != &op)
		_stack = op._stack;
	return *this;
}

RPN::~RPN( ) {}
