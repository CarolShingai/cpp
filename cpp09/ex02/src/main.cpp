#include "../include/PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2)
		std::cerr << "Error: insuficient number of arguments" << std::endl;
	Pmerge pmerge;
	pmerge.run(argc, argv);
	
	std::cout << "Checking vector: " << pmerge.getVec().size() << " elements" << std::endl;
	std::cout << "Checking deque: " << pmerge.getDeq().size() << " elements" << std::endl;
	return 0;
}
