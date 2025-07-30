#include "../include/PmergeMe.hpp"

void Pmerge::printVec(int after, std::vector<int> v){
	if (after == 0)
		std::cout << "begin: ";
	else
		std::cout << "after: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

std::vector<int> &Pmerge::getVec(void){
	return this->_vec;
}

void Pmerge::fordJohnsonStep1(){
	std::vector<std::pair<int, int> > _pairs;
	std::vector<int> _smallValues;
	std::vector<int> _bigValues;

	for (size_t i = 0; i < getVec().size(); i += 2){
		int a = this->_vec[i];
		int b = this->_vec[i + 1];
		if (a < b)
			_pairs.push_back(std::make_pair(a, b));
		else
			_pairs.push_back(std::make_pair(b, a));
	}
	for (size_t i = 0; i < _pairs.size(); i++){
		_smallValues.push_back(_pairs[i].first);
		_bigValues.push_back(_pairs[i].second);
	}
}

void Pmerge::fordJohnsonStep2(std::vector<int> big, std::vector<int> small){
	std::sort(big.begin(), big.end());
	
	std::vector<size_t> _jacobSeq = generateJacobstallSequence(small.size());
	while(!_jacobSeq.empty()){
		int value = small[_jacobSeq.front()];
		std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), value);
		big.insert(pos, value);
		_jacobSeq.erase(_jacobSeq.begin());
	}
	printVec(1, big);
}