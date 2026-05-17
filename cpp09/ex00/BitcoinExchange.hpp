#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>

class   BitcoinExchange{
    private:
        void    storageDatabase( void );
        void    handleInputFile( char *inputFile );
        std::map<std::string, float>  m;

    public:
        BitcoinExchange( void );
        BitcoinExchange( const BitcoinExchange &copy );
        BitcoinExchange &operator=( const BitcoinExchange &op );
        ~BitcoinExchange( );

        void    execute( char *inputFile );
};
