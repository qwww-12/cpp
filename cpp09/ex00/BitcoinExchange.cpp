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
    if (!dataBase.is_open())
        throw std::runtime_error("Runtime Error: can't open file of data.scv");
    getline(dataBase, buffer);
    while (getline(dataBase, buffer)){
        size_t  pos = buffer.rfind(',');
        if (pos == std::string::npos)
        {
            dataBase.close();
            throw std::runtime_error("Runtime Error: DataBase not valid");
        }
        m[buffer.substr(0, pos)] = std::stof(buffer.substr(pos + 1));
    }
    dataBase.close();
}

void    BitcoinExchange::handleInputFile( char *inputFile )
{
    for (std::map<std::string, float>::iterator it = m.begin(); it != m.end(); it++){
        std::cout << it->first << " == " << it->second << std::endl;
    }
    std::cout << inputFile << std::endl;
}

void    BitcoinExchange::execute( char *inputFile ){
    storageDatabase();
    handleInputFile(inputFile);
}