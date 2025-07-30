#include "../include/PmergeMe.hpp"

void Pmerge::printVec(){
	std::cout << "begin: ";
	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
