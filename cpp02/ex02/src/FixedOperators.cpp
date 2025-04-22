#include "../include/Fixed.hpp"

// Arithmet Operator
Fixed Fixed::operator+(const Fixed &value) const
{
    return Fixed(this->toFloat() + value.toFloat());
}

Fixed Fixed::operator-(const Fixed &value) const
{
    return Fixed(this->toFloat() - value.toFloat());
}

Fixed Fixed::operator*(const Fixed &value) const
{
    return Fixed(this->toFloat() * value.toFloat());
}

Fixed Fixed::operator/(const Fixed &value) const
{
    return Fixed(this->toFloat() / value.toFloat());
}

// Increment and decrement
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    _fixedPointValue++;
    return (temp);
}

Fixed &Fixed::operator++()
{
    ++_fixedPointValue;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    _fixedPointValue--;
    return (temp);
}

Fixed &Fixed::operator--()
{
    --_fixedPointValue;
    return (*this);
}

// Comparison Operators
bool Fixed::operator<(const Fixed &value) const
{
    if (this->_fractionalBits < value.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator>(const Fixed &value) const
{
    if (this->_fractionalBits > value.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &value) const
{
    if (this->_fractionalBits <= value.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed &value) const
{
    if (this->_fractionalBits >= value.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed &value) const
{
    if (this->_fractionalBits == value.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &value) const
{
    if (this->_fractionalBits != value.getRawBits())
        return true;
    else
        return false;
}
