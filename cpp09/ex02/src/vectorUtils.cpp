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

void Pmerge::fordJohnsonVec(){
	std::vector<int> _smallValues;
	std::vector<int> _bigValues;
	clock_t vec_start = clock();
	fordJohnsonStep1(_bigValues, _smallValues);
	fordJohnsonStep2(_bigValues, _smallValues);
	this->_vec = _bigValues;
	clock_t vec_end = clock();
}

void Pmerge::fordJohnsonStep1(std::vector<int> &big, std::vector<int> &small){
	std::vector<std::pair<int, int> > _pairs;

	for (size_t i = 0; i + 1 < getVec().size(); i += 2){
		int a = this->_vec[i];
		int b = this->_vec[i + 1];
		if (a < b)
			_pairs.push_back(std::make_pair(a, b));
		else
			_pairs.push_back(std::make_pair(b, a));
	}
	for (size_t i = 0; i < _pairs.size(); i++){
		small.push_back(_pairs[i].first);
		big.push_back(_pairs[i].second);
	}
	if (getVec().size() % 2 != 0)
		small.push_back(getVec().back());
}

void Pmerge::fordJohnsonStep2(std::vector<int> &big, std::vector<int> &small){
	std::sort(big.begin(), big.end());
	orderByJacobstallSeq_vec(big, small);
	// order following small order
	while(!small.empty()){
		int value = *small.begin();
		std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), value);
		big.insert(pos, value);
		small.erase(small.begin());
	}
}

void Pmerge::orderByJacobstallSeq_vec(std::vector<int> &big, std::vector<int> &small){
	std::vector<size_t> _jacobSeq = generateJacobstallSequence(small.size());

	while(!_jacobSeq.empty()){
		int value = small[_jacobSeq.front()];
		std::vector<int>::iterator pos = std::lower_bound(big.begin(), big.end(), value);
		big.insert(pos, value);
		std::vector<int>::iterator it = std::find(small.begin(), small.end(), value);
		small.erase(it);
		_jacobSeq.erase(_jacobSeq.begin());
	}
}
