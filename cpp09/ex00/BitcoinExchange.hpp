#pragma once

#include <iostream>
#include <map>
#include <fstream>

class   BitcoinExchange{
    private:
        void    storageDatabase( void );

        std::map<std::string, float>  m;

    public:
        BitcoinExchange( void );
        BitcoinExchange( const BitcoinExchange &copy );
        BitcoinExchange &operator=( const BitcoinExchange &op );
        ~BitcoinExchange( );

        void    execute( void );
};
