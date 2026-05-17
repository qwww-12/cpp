#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <exception>
#include <string>

class   BitcoinExchange{
    private:
        void    storageDatabase( void );
        void    handleInputFile( char *inputFile );

        class   BadFileInput : public std::exception{
            public:
                const char  *what( void ) const throw();
        };

        std::map<std::string, float>  m;
    public:
        BitcoinExchange( void );
        BitcoinExchange( const BitcoinExchange &copy );
        BitcoinExchange &operator=( const BitcoinExchange &op );
        ~BitcoinExchange( );

        void    runBitcoinExchange( char *inputFile );
};
