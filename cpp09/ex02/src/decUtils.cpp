#include "../include/PmergeMe.hpp"

void Pmerge::printDec(int after, std::deque<int> d){
	if (!after)
		std::cout << "begin: ";
	else
		std::cout << "after: ";
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

std::deque<int> &Pmerge::getDeq(void){
	return this->_deq;
}

void Pmerge::fordJohnsonDeq(){
	std::deque<int> big;
	std::deque<int> small;
	fordJohnsonDeq1(big, small);
	fordJohnsonDeq2(big, small);
	this->_deq = big;

}

void Pmerge::fordJohnsonDeq1(std::deque<int> &big, std::deque<int> &small){
	std::deque<std::pair<int, int> > _pair;
	for (size_t i = 0; i + 1 < getDeq().size(); i += 2){
		int a = this->_deq[i];
		int b = this->_deq[i + 1];
		if (a < b)
			_pair.push_back(std::make_pair(a, b));
		else
			_pair.push_back(std::make_pair(b, a));
	}
	for (size_t i = 0; i < _pair.size(); i++){
		small.push_back(_pair[i].first);
		big.push_back(_pair[i].second);
	}
	if (getDeq().size() % 2 != 0)
		small.push_back(getDeq().back());
}

void Pmerge::fordJohnsonDeq2(std::deque<int> &big, std::deque<int> &small){
	std::sort(big.begin(), big.end());

	orderByJacobstallSeq_deq(big, small);
	while(!small.empty()){
		int value = *small.begin();
		std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), value);
		big.insert(pos, value);
		small.erase(small.begin());
	}
}

void Pmerge::orderByJacobstallSeq_deq(std::deque<int> &big, std::deque<int> &small){
	std::vector<size_t> _jacobSeq = generateJacobstallSequence(small.size());
	while(!_jacobSeq.empty()){
		int value = small[_jacobSeq.front()];
		std::deque<int>::iterator pos = std::lower_bound(big.begin(), big.end(), value);
		big.insert(pos, value);
		std::deque<int>::iterator it = std::find(small.begin(), small.end(), value);
		small.erase(it);
		_jacobSeq.erase(_jacobSeq.begin());
	}
}
