#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange &copy ) : m(copy.m) {}

BitcoinExchange &BitcoinExchange::operator=( const BitcoinExchange &op ){
    if (this != &op){
        m = op.m;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange( ) {}