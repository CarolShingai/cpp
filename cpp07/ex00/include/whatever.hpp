#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
static void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
static T min(const T &first, const T &second){
    if (first < second)
        return first;
    else
        return second;
}

template <typename T>
static T max(const T &first, const T &second){
    if (first > second)
        return first;
    else
        return second;
}

#endif