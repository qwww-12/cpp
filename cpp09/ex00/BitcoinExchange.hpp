#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <exception>
#include <string>
#include <sstream>

class   BitcoinExchange{
    private:
        void    storageDatabase( void );
        void    handleInputFile( char *nameInputFile );


        class   BadDataBase : public std::exception{
            public:
                const char  *what( void ) const throw();
        };
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

        void    runBitcoinExchange( char *nameInputFile );
};
