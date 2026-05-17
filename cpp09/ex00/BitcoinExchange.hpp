#pragma once

#include <iostream>
#include <map>

class   BitcoinExchange{
    private:
        std::map<std::string, std::string>  m;
    
    public:
        BitcoinExchange( void );
        BitcoinExchange( const BitcoinExchange &copy );
        BitcoinExchange &operator=( const BitcoinExchange &op );
        ~BitcoinExchange( );
};
