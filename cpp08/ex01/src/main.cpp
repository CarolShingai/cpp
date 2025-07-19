#include "../include/Span.hpp"
#include <algorithm>
#include <stdexcept>
#include  <ctime>

int main() {
    try {
        std::cout << BLUE << "###### Testing Span class with subject test ######" << RESET << std::endl;
        std::cout << GREEN << "Test 1: Subject test" << RESET << std::endl;
        // Create a Span object with a limit of 5 numbers
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    try{
        std::cout << GREEN << "Test 2: exception handling" << RESET << std::endl;
        // Create a Span object with a limit of 2 numbers
        Span sp(2);
        sp.addNumber(1);
        sp.addNumber(2);
        std::cout << "Adding a third number to Span" << RESET << std::endl;
        sp.addNumber(3); // This should throw an exception
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    try{
        std::cout << GREEN << "Test 3: Testing method addMultipleNumbers" << RESET << std::endl;
        // Create a Span object with a limit of 10 numbers
        std::vector<int> numbers;
        for (int i = 0; i < 10; ++i)
            numbers.push_back(i + 1);
        std::cout << "Adding multiple numbers to Span" << RESET << std::endl;
        Span sp(10);
        sp.addMultipleNumbers(numbers.begin(), numbers.end());
        std::cout << "Numbers added successfully." << std::endl;
        std::vector<int> empty_numbers;
        std::cout << "Adding empty vector to Span" << RESET << std::endl;
        sp.addMultipleNumbers(empty_numbers.begin(), empty_numbers.end());
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << GREEN << "Test 4: Testing shortestSpan and longestSpan with empty Span" << RESET << std::endl;
        // Create an empty Span object
        Span sp_empty(5);
        std::cout << "Trying to get shortest span from empty Span" << RESET << std::endl;
        sp_empty.shortestSpan(); // This should throw an exception
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << GREEN << "Test 5: Testing copy constructor and assignment operator" << RESET << std::endl;
        // Create a Span object and add some numbers
        Span sp1(5);
        sp1.addNumber(1);
        sp1.addNumber(2);
        sp1.addNumber(3);
        std::cout << "Copying Span object" << RESET << std::endl;
        Span sp2(sp1); // Copy constructor
        std::cout << "Copying completed." << std::endl;
        std::cout << "Assigning Span object" << RESET << std::endl;
        Span sp3(5);
        sp3 = sp1; // Assignment operator
        std::cout << "Assignment completed." << std::endl;
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << GREEN << "Test 6: Testing Span with a limit of 1000000" << RESET << std::endl;
        // Create a Span object with a limit of 100000 numbers
        std::vector<int> large_numbers;
        srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < 1000000; ++i)
            large_numbers.push_back(rand());
        Span sp_large(1000000);
        std::cout << "Adding 1000000 numbers to Span" << RESET << std::endl;
        sp_large.addMultipleNumbers(large_numbers.begin(), large_numbers.end());
        std::cout << "Shortest span: " << sp_large.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp_large.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << RED << e.what() << RESET << std::endl;
    }
    std::cout << BLUE << "###### End of Span class tests ######" << RESET << std::endl;
    return 0;
}