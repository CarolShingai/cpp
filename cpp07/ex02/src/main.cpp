#include "../include/Array.hpp"
#include "../include/Array.tpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstdlib>

int main() {
	std::cout << GREEN << "==== Array Class Tests ====" << RESET << std::endl;
	std::cout << PURPLE << "Test 1: Empty Array" << RESET << std::endl;
	try
	{
		Array<std::string> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;
		std::cout << "Trying to access an element in the empty array will throw an exception." << std::endl;
		std::cout << "Accessing emptyArray[0]: " << emptyArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PURPLE << "Test 2: Array class with int type:" << RESET << std::endl;
	try
	{
		Array<int> intArray(5);
		for (unsigned int i = 0; i < intArray.size(); i++){
			intArray[i] = i * 10;
		}
		std::cout << "Array size: " << intArray.size() << std::endl;
		std::cout << "Array content -> array[2]= " << intArray[2] << std::endl;
		intArray[2] = 42;
		std::cout << "Array content after modification -> array[2]= " << intArray[2] << std::endl;
		std::cout << ORANGE<< "Throwing an exception by accessing an out of range index." << RESET << std::endl;
		std::cout << "Accessing intArray[10]: " << intArray[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << PURPLE << "Test 3: Array class with string type:" << RESET << std::endl;
	try
	{
		Array<std::string> stringArray(6);
		stringArray[0] = "Batatinha";
		stringArray[1] = "Frita";
		stringArray[2] = "1";
		stringArray[3] = "2";
		stringArray[4] = "3";
		stringArray[5] = "!";
		std::cout << "Array size: " << stringArray.size() << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++){
			std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
