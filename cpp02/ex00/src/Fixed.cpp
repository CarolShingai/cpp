#include "../include/Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::~Fixed()
{
    std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << PURPLE << "Copy assignment operator called" << RESET << std::endl;
    if (this != &copy)
        this->_fixedPointValue = copy._fixedPointValue;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << ORANGE << "getRawBits member function called" << RESET << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << ORANGE << "setRawBits member function called" << RESET << std::endl;
    this->_fixedPointValue = raw;
}