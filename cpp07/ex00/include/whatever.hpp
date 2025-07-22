#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

template <typename T>
static void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
static const T min(const T &first, const T &second){
    if (first < second)
        return first;
    else
        return second;
}

template <typename T>
static const T max(const T &first, const T &second){
    if (first > second)
        return first;
    else
        return second;
}

#endif
