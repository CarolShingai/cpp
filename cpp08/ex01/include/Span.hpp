#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

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
        int shortestSpan(void);
        int longestSpan(void);
};

#endif
