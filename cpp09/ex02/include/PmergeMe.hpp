#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <string>
# include <cstdlib>
# include <cctype>
# include <algorithm>

class Pmerge{
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
	public:
		Pmerge();
		~Pmerge();
		Pmerge(const Pmerge &other);
		Pmerge &operator=(const Pmerge &other);

		std::vector<int> &getVec(void);
		std::deque<int> &getDeq(void);

		void	run(int argc, char **argv);
		bool	checkArgs(int argc, char **argv);

		// methods for vector
		void	printVec(void);
};


#endif
