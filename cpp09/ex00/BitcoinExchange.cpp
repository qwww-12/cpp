#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &copy ) : m(copy.m) {}

BitcoinExchange &BitcoinExchange::operator=( const BitcoinExchange &op ){
	if (this != &op){
		m = op.m;
	}
	return (*this);
}

const char  *BitcoinExchange::BadDataBase::what( void ) const throw(){
	return "Error: bad data base";
}

const char  *BitcoinExchange::BadFileInput::what( void ) const throw(){
	return "Error: bad file input";
}

BitcoinExchange::~BitcoinExchange( ) {}

void    BitcoinExchange::storageDatabase( void ){
	std::ifstream       dataBase("data.csv");
	std::string         buffer;
	if (!dataBase.is_open())
		throw std::runtime_error("Runtime Error: can't open file of data.scv");
	getline(dataBase, buffer);
	while (getline(dataBase, buffer)){
		size_t  pos = buffer.rfind(',');
		if (pos == std::string::npos)
		{
			dataBase.close();
			throw BitcoinExchange::BadDataBase();
		}
		m[buffer.substr(0, pos)] = std::stof(buffer.substr(pos + 1));
	}
	dataBase.close();
}

bool	BitcoinExchange::handleDate( std::string buffer ) const{
	std::stringstream	ss(buffer);
	std::string			_buffer;
	int					time = 0;
	long				number;

	while(getline(ss, _buffer, '-')){
		std::stringstream _s(_buffer);
		_s >> number;
		if (_s.fail()) return false;
		if (time == 0 && (number > 9999 || number < 1)) return false;
		if (time == 1 && (number > 12 || number < 1)) return false;
		if (time == 2 && (number > 31 || number < 1)) return false;
		time++;
	}
	return (true);
}

void    BitcoinExchange::handleInputFile( char *nameInputFile )
{
	std::ifstream       inputFile(nameInputFile);
	std::stringstream   ss;
	std::string         buffer;
	std::string         date;
	std::string         stringNumber;
	double              realNumber;
	float               finalResult;
	std::map<std::string, float>::iterator  it;

	if (!inputFile.is_open())
		throw std::runtime_error("Runtime Error: can't open file of " + static_cast<std::string>(nameInputFile));
	if (getline(inputFile, buffer)){
		if (buffer != "date | value"){
			inputFile.close();
			throw BitcoinExchange::BadFileInput();
		}
	}
	while (getline(inputFile, buffer)){
		ss.clear();
		ss.str("");
		size_t pos = buffer.find('|');
		if (pos == std::string::npos){
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue ;
		}
		stringNumber = buffer.substr(pos + 2);
		ss << stringNumber;
		ss >> realNumber;
		if (realNumber < 0){
			std::cout << "Error: number is negative" << std::endl;
			continue ;
		}
		if (realNumber > 1000){
			std::cout << "Error: number is big" << std::endl;
			continue ;
		}
		date = buffer.substr(0, pos - 1);
		if (!handleDate(date)){
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue ;
		}
		it = m.lower_bound(date);
		finalResult = realNumber * it->second;
		std:: cout << date << " => " << finalResult << std::endl;
	}
}

void    BitcoinExchange::runBitcoinExchange( char *nameInputFile ){
	storageDatabase();
	handleInputFile(nameInputFile);
}