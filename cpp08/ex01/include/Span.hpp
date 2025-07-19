#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

class Span {
	private:
        unsigned int _n;
        std::vector<int> _container;
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

        void addNumber(int new_nbr);
        void addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif
