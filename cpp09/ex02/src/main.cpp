#include "../include/PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2){
		std::cerr << "Error" << std::endl;
		return 1;
	}
	Pmerge pmerge;
	pmerge.run(argc, argv);
	return 0;
}
