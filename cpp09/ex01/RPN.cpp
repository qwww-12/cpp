#include "RPN.hpp"

RPN::RPN( void ) {}

RPN::RPN( const RPN &copy ) : _stack(copy._stack) {}

RPN	&RPN::operator=( const RPN &op ){
	if (this != &op)
		_stack = op._stack;
	return *this;
}

void	RPN::_runRPN( char *math ){
	std::string	buffer;
	int			nbr;

	std::stringstream _sgetLine(math);
	std::stringstream	_toNumber;
	while (getline(_sgetLine, buffer, ' ')){
		_toNumber << buffer;
		_toNumber >> nbr;
		if (_toNumber.fail()){
			throw RPN::BadNumbers();
		}
	}
}

RPN::~RPN( ) {}
