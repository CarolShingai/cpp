#include "../include/Span.hpp"

Span::Span() : _n(10){
    this->_container.reserve(this->_n);
}

Span::Span(unsigned int n) : _n(n){
    this->_container.reserve(this->_n);
}

Span::~Span(){}

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
    if (this->_container.size() >= this->_n) 
        throw std::length_error("ERROR: Span limit reached: cannot add more numbers");
    this->_container.push_back(new_n);
}

void Span::addMultipleNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) + this->_container.size() > _n)
        throw std::length_error("ERROR: Span limit reached: cannot add more numbers");
    if (begin == end)
        throw std::length_error("ERROR: No numbers to add.");
    if (this->_container.empty())
        this->_container.insert(this->_container.end(), begin, end);
    else
        this->_container.insert(this->_container.end(), begin, end);
}

int Span::shortestSpan(void){
    if (this->_container.size() < 2)
        throw std::length_error("ERROR: No enough numbers in Span to get a short value.");
    std::vector <int> sorted = this->_container;
    std::sort(sorted.begin(), sorted.end());
    int dist = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted.size() - 1; i++){
        int new_dist = sorted[i + 1] - sorted[i];
        if (dist > new_dist)
            dist = std::abs(new_dist);
    }
    return dist;
}

int Span::longestSpan(void){
    if (this->_container.size() < 2)
        throw std::length_error("ERROR: No enough numbers in Span to get a long value.");
    std::vector<int> sorted = this->_container;
    std::sort(sorted.begin(), sorted.end());
    return sorted.back() - sorted.front();
}


