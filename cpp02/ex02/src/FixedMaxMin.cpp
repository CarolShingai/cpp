#include "../include/Fixed.hpp"

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

Fixed const &Fixed::max(const Fixed &x, const Fixed &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

Fixed &Fixed::min(Fixed &x, Fixed &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

Fixed const &Fixed::min(const Fixed &x, const Fixed &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}