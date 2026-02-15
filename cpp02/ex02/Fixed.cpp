#include "Fixed.hpp"

Fixed::Fixed( ) : fxd(0) 
{}

Fixed::Fixed( const int val )
{
   fxd = val << bits;
}

Fixed::Fixed( const float val )
{
    fxd = roundf(val * (1 << bits));
}

Fixed::Fixed( const Fixed &copy )
{
    *this = copy;
}

Fixed &Fixed::operator=( const Fixed &copy )
{
    if (this != &copy)
        this->setRawBits(copy.getRawBits());
    return (*this);
}

Fixed::~Fixed( ) 
{}

std::ostream &operator<<( std::ostream &out, const Fixed &obj )
{
    out << obj.toFloat();
    return (out);
}

int Fixed::getRawBits( void ) const
{
    return (fxd);
}

void Fixed::setRawBits( const int raw )
{
    fxd = raw;
}

int Fixed::toInt( void ) const
{
    return (fxd >> bits);
}

float Fixed::toFloat( void ) const
{
    return (fxd / static_cast<float>(1 << bits));
}

bool Fixed::operator>( const Fixed &op ) const
{
	return (this->fxd > op.fxd);
}

bool Fixed::operator<( const Fixed &op ) const
{
	return (this->fxd < op.fxd);
}
bool Fixed::operator>=( const Fixed &op ) const
{
	return (this->fxd >= op.fxd);
}

bool Fixed::operator<=( const Fixed &op ) const
{
	return (this->fxd <= op.fxd);
}

bool Fixed::operator==( const Fixed &op ) const
{
	return (this->fxd == op.fxd);
}

bool Fixed::operator!=( const Fixed &op ) const
{
	return (this->fxd != op.fxd);
}

Fixed Fixed::operator+( const Fixed &op ) const
{
	Fixed   obj;

	obj.setRawBits(this->fxd + op.fxd);
	return (obj);
}

Fixed Fixed::operator-( const Fixed &op) const
{
    Fixed   obj;

    obj.setRawBits(this->fxd - op.fxd);
    return (obj);
}

Fixed Fixed::operator*( const Fixed &op ) const
{
    Fixed   obj;

    obj.setRawBits((this->fxd * op.fxd) >> 8);
    return (obj);
}

Fixed Fixed::operator/( const Fixed &op ) const
{
    Fixed   obj;

    obj.setRawBits((this->fxd / op.fxd) << 8);
    return (obj);
}

Fixed &Fixed::operator++( )
{
    ++this->fxd;
    return (*this);
}

Fixed &Fixed::operator--( )
{
    --this->fxd;
    return (*this);
}

Fixed Fixed::operator++( int )
{
    Fixed old(*this);
    this->fxd++;
    return (old);
}

Fixed Fixed::operator--( int )
{
    Fixed old(*this);
    this->fxd--;
    return (old);
}

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b )
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b )
{
    if (a < b)
        return (a);
    return (b);
}
