#include "RPN.hpp"

RPN::RPN( void ) {}

RPN::RPN( const RPN &copy ) : _stack(copy._stack) {}

RPN	&RPN::operator=( const RPN &op ){
	if (this != &op)
		_stack = op._stack;
	return *this;
}

const char	*RPN::BadNumbers::what( void ) const throw(){
	return "Error: bad number";
}

const char	*RPN::BadOperator::what( void ) const throw(){
	return "Error: bad operator";
}

const char	*RPN::BadStack::what( void ) const throw(){
	return "Error: bad stack";
}

const char	*RPN::BadRPNSynatx::what( void ) const throw(){
	return "Error: syntax bad of polish reverse nataion";
}

const char	*RPN::NumberNotValid::what( void ) const throw(){
	return "Error: number in argument greater than 9";
}

const char	*RPN::DivisionFail::what( void ) const throw(){
	return "Error: division by 0";
}

bool	RPN::is_operator( std::string str ) const{
	if (str[0] == '+'){
		if (str.length() != 1) throw RPN::BadOperator();
		return (true);
	}
	if (str[0] == '-'){
		if (str.length() != 1) throw RPN::BadOperator();
		return (true);
	}
	if (str[0] == '*'){
		if (str.length() != 1) throw RPN::BadOperator();
		return (true);
	}
	if (str[0] == '/'){
		if (str.length() != 1) throw RPN::BadOperator();
		return (true);
	}
	return (false);
}

void	RPN::_runRPN( char *math ){
	std::string	buffer;
	std::string	op;
	int			nbr;

	std::stringstream _sgetLine(math);
	while (getline(_sgetLine, buffer, ' ')){
		if (buffer.empty())
			continue ;
		std::stringstream	_toNumber;
		if (is_operator(buffer) == true){
			op = buffer;
			if (_stack.size() < 2)
				throw RPN::BadStack();
			nbr = _stack.top();
			_stack.pop();
			if (op == "/"){
				if (nbr == 0)
					throw RPN::DivisionFail();
				nbr = _stack.top() / nbr;
			}
			else if (op == "+") nbr += _stack.top();
			else if (op == "-") nbr = _stack.top() - nbr;
			else nbr *= _stack.top();
			_stack.pop();
			_stack.push(nbr);
			continue ;
		}
		_toNumber << buffer;
		_toNumber >> nbr;
		if (_toNumber.fail())
			throw RPN::BadNumbers();
		if (nbr > 9)
			throw RPN::NumberNotValid();
		_stack.push(nbr);
	}
	if (_stack.size() != 1)
		throw RPN::BadRPNSynatx();
	std::cout << _stack.top() << std::endl;
}

RPN::~RPN( ) {}
