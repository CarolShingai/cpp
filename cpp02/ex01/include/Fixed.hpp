#ifndef FIXEX_HPP
# define FIXEX_HPP

# include <iostream>
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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif