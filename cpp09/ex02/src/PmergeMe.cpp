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
	printVec(0, this->_vec);
	printDec(0, this->_deq);
	fordJohnsonVec();
	clock_t deq_start = clock();
	fordJohnsonDeq();
	clock_t deq_end = clock();
	printVec(1, this->_vec);
	printDec(1, this->_deq);
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

std::vector<size_t> Pmerge::generateJacobstallSequence(size_t len){
	std::vector<size_t> _order;
	size_t j0 = 1;
	size_t j1 = 1;

	while(j1 < len){
		_order.push_back(j1);
		size_t next = j1 + 2 * j0;
		j0 = j1;
		j1 = next;
	}
	return _order;
}
