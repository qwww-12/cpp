#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 fxd;
        static const int    bits = 8;
    public:
        Fixed( );
        Fixed( const int it );
        Fixed( const float flt );
        Fixed( const Fixed &copy );
        Fixed &operator=( const Fixed &copy );
        ~Fixed( );

        int     getRawBits( void ) const;
        void    setRawBits( const int raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        friend std::ostream &operator<<( std::ostream &out, const Fixed &obj );
};

#endif