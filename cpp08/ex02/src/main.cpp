#include "../include/MutantStack.hpp"
#include <iostream>

int main(){
	std::cout << GREEN << "####### Init Tests #######" << RESET << std::endl;
	std::cout << ORANGE << "TEST 1: MutantStack with integers." << RESET << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << ORANGE << "TEST 2: MutantStack with strings." << RESET << std::endl;
	MutantStack<std::string> mstackStr;
	mstackStr.push("Hello");
	mstackStr.push("World");
	mstackStr.push("from");
	mstackStr.push("MutantStack");
	mstackStr.push("!");
	std::cout << "Iterating through MutantStack of strings:\n";
	for (MutantStack<std::string>::iterator it = mstackStr.begin(); it != mstackStr.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << GREEN << "####### End Tests #######" << RESET << std::endl;
	return 0;
}
