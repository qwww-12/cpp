#include "Fixed.hpp"

Fixed::Fixed( ) : fxd(0)
{
    std::cout << "Default constructor called" << std::endl;
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

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fxd);
}

void Fixed::setRawBits( const int raw )
{
    fxd = raw;
}
