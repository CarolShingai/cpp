# include "../include/iter.hpp"
#include <string>
#include <iostream>

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    std::string strArray[] = {"Hello", "World", "Iterators", "Are", "Cool"};
    
    std::cout << "Integer array elements:" << std::endl;
    iter(intArray, 5, print<int>);
    
    std::cout << "\nString array elements:" << std::endl;
    iter(strArray, 5, print<std::string>);
    
    return 0;
}