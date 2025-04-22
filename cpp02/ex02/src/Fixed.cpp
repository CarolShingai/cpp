#include "../include/Fixed.hpp"

// Forma Canonica
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

// Construtores
Fixed::Fixed(const int value)
{
    this->_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}


//Uma forma de casting 
int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> _fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixedPointValue / (1 << _fractionalBits);
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

// sobrecarregar o operador de inserção
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
