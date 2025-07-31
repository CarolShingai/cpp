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

		void	run(int argc, char **argv);
		bool	checkArgs(int argc, char **argv);
		std::vector<size_t>	generateJacobstallSequence(size_t len);

		// methods for vector
		void	printVec(int after, std::vector<int> v);
		void	fordJohnsonVec(void);
		void	fordJohnsonStep1(std::vector<int> &big, std::vector<int> &small);
		void	fordJohnsonStep2(std::vector<int> &big, std::vector<int> &small);
		void	orderByJacobstallSeq_vec(std::vector<int> &big, std::vector<int> &small);
		std::vector<int> &getVec(void);

		// methods for deque
		void	printDec(int after, std::deque<int> d);
		std::deque<int> &getDeq(void);
		void	fordJohnsonDeq(void);
		void	fordJohnsonDeq1(std::deque<int> &big, std::deque<int> &small);
		void	fordJohnsonDeq2(std::deque<int> &big, std::deque<int> &small);
		void	orderByJacobstallSeq_deq(std::deque<int> &big, std::deque<int> &small);
};


#endif
