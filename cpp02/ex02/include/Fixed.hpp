#ifndef FIXEX_HPP
# define FIXEX_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

// color
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        Fixed(const int value);
        Fixed(const float value);
        int toInt(void) const;
        float toFloat(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        //Arithmetic operators
        Fixed operator+(const Fixed &value) const;
        Fixed operator-(const Fixed &value) const;
        Fixed operator*(const Fixed &value) const;
        Fixed operator/(const Fixed &value) const;
        //Increment and decrement
        Fixed operator++(int);
        Fixed &operator++();
        Fixed operator--(int);
        Fixed &operator--();

        //Comparison operators
        bool operator>(const Fixed &value) const;
        bool operator<(const Fixed &value) const;
        bool operator>=(const Fixed &value) const;
        bool operator<=(const Fixed &value) const;
        bool operator==(const Fixed &value) const;
        bool operator!=(const Fixed &value) const;

        // max & min
        static Fixed &max(Fixed &x, Fixed &y);
        static const Fixed &max(const Fixed &x,const Fixed &y);
        static Fixed &min(Fixed &x, Fixed &y);
        static const Fixed &min(const Fixed &x, const Fixed &y);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif