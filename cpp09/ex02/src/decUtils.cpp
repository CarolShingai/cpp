#include "../include/PmergeMe.hpp"

void Pmerge::printDec(){
    std::cout << "begin dec: ";
    for (std::deque<int>::iterator it = this->_deq.begin(); it != this->_deq.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

std::deque<int> &Pmerge::getDeq(void){
	return this->_deq;
}