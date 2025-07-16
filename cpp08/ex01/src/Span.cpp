#include "../include/Span.hpp"

Span::Span() : _n(10){
    this->_container.reserve(this->_n);
}

Span::Span(unsigned int n) : _n(n){
    this->_container.reserve(this->_n);
}

Span::~Span(){}

// talvez fazer uma verificacao se n = 0;
Span::Span(const Span &other) : _n(other._n){
    this->_n = other._n;
    this->_container = other._container;
}

Span &Span::operator=(const Span &other){
    if (this != &other){
        this->_n = other._n;
        this->_container = other._container;
    }
    return *this;
}

void Span::addNumber(int new_n){
    if (this->_container.size() < this->_n) 
        throw std::length_error("Span limit reached: cannot add more numbers");
    this->_container.push_back(new_n);
}

int Span::shortestSpan(void){
    // return the max value in the container, belongs to the lib algorithm
    if (this->_container.size() < 2)
        throw std::length_error("No enough numbers in Span to get a short value.");
    int max = *std::max_element(this->_container.begin(), this->_container.end());
    return max;
}

int Span::longestSpan(void){
    if (this->_container.size() < 2)
            throw std::length_error("No enough numbers in Span to get a short value.");
    int max = *std::max_element(this->_container.begin(), this->_container.end());
    return max;
}


