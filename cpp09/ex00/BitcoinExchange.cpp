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

void    BitcoinExchange::storageDatabase( void ){
    std::ifstream       dataBase("data.csv");
    std::string         buffer;

    m["l"] = 90.9;
    if (!dataBase.is_open())
        throw std::runtime_error("Runtime Error: can't open file of data.scv");
    while (getline(dataBase, buffer)){
        std::cout << buffer << std::endl;
    }
    dataBase.close();
}

void    BitcoinExchange::execute( void ){
    storageDatabase();
}