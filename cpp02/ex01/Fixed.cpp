#include "Fixed.hpp"

Fixed::Fixed( ) : fxd(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val )
{
    std::cout << "Int constructor called" << std::endl;
    fxd = val << bits;
}

Fixed::Fixed( const float val )
{
    std::cout << "Float constructor called" << std::endl;
    fxd = roundf(val * (1 << bits));
}

Fixed::Fixed( const Fixed &copy )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=( const Fixed &copy )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->setRawBits(copy.getRawBits());
    return (*this);
}

Fixed::~Fixed( )
{
    std::cout << "Destructor called" << std::endl;
}

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
