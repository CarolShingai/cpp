#include "../include/PmergeMe.hpp"

Pmerge::Pmerge(){}

Pmerge::~Pmerge(){}

Pmerge::Pmerge(const Pmerge &other){
	this->_vec = other._vec;
	this->_deq =  other._deq;
}

Pmerge &Pmerge::operator=(const Pmerge &other){
	if (this != &other){
		this->_vec = other._vec;
		this->_deq = other._deq;
	}
	return *this;
}

void Pmerge::run(int argc, char **argv){
	if (!checkArgs(argc, argv)){
		std::cerr << "Error: You must pass only positive numbers." << std::endl;
		return ;
	}
	for (int i = 1; i < argc; i++){
		_vec.push_back(std::atoi(argv[i]));
		_deq.push_back(std::atoi(argv[i]));
	}
	printVec();
}

std::vector<int> &Pmerge::getVec(void){
	return this->_vec;
}

std::deque<int> &Pmerge::getDeq(void){
	return this->_deq;
}

bool Pmerge::checkArgs(int argc, char **argv){
	for (int i = 1; i < argc; i++){
		std::string str(argv[i]);
		for (size_t j = 0; j < str.size(); j++){
			if (!std::isdigit(str[j]))
				return false;
		}
	}
	return true;
}
