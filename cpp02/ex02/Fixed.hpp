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
        Fixed &operator++( );
        Fixed &operator--( );
        Fixed operator++( int );
        Fixed operator--( int );
		Fixed operator+( const Fixed &op ) const;
        Fixed operator-( const Fixed &op ) const;
        Fixed operator*( const Fixed &op ) const;
        Fixed operator/( const Fixed &op ) const;
		bool operator>( const Fixed &op ) const;
		bool operator<( const Fixed &op ) const;
		bool operator>=( const Fixed &op ) const;
		bool operator<=( const Fixed &op ) const;
		bool operator==( const Fixed &op ) const;
		bool operator!=( const Fixed &op ) const;
        ~Fixed( );

        int                 getRawBits( void ) const;
        void                setRawBits( const int raw );
        float               toFloat( void ) const;
        int                 toInt( void ) const;
        static Fixed        &max( Fixed &a, Fixed &b );
        static const Fixed  &max( const Fixed &a, const Fixed &b );
        static Fixed        &min( Fixed &a, Fixed &b );
        static const Fixed  &min( const Fixed &a, const Fixed &b );

};

std::ostream &operator<<( std::ostream &out, const Fixed &obj );

#endif