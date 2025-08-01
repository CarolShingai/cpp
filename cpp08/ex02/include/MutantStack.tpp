#include "../include/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other) {
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin() {
    return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end() {
    return std::stack<T>::c.end();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin() const {
    return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::end() const {
    return std::stack<T>::c.end();
}
