#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 fxd;
        static const int    bits = 8;
    public:
        Fixed( );
        Fixed( const Fixed &copy );
        Fixed &operator=( const Fixed &copy );
        ~Fixed( );

        int     getRawBits( void ) const;
        void    setRawBits( const int raw );
};

#endif