#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain{
	private:
		std::string _idea[100];
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();

		void setBrain(std::string s, int index);
		std::string getIdea(int index);
};

#endif
