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

void    BitcoinExchange::handleInputFile( char *nameInputFile )
{
    std::ifstream   inputFile(nameInputFile);
    std::string     buffer;

    if (!inputFile.is_open())
        throw std::runtime_error("Runtime Error: can't open file of " + static_cast<std::string>(nameInputFile));
    if (getline(inputFile, buffer)){
        if (buffer != "date | value"){
            inputFile.close();
            throw BitcoinExchange::BadFileInput();
        }
    }
    while (getline(inputFile, buffer)){
        size_t pos = buffer.find('|');
        if (pos == std::string::npos){
            inputFile.close();
            throw BitcoinExchange::BadFileInput();
        }
        std::string     str = buffer.substr(pos + 1);
        long            nbr = std::stol
    }
}

void    BitcoinExchange::runBitcoinExchange( char *nameInputFile ){
    storageDatabase();
    handleInputFile(nameInputFile);
}