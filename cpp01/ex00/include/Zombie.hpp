#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
	private:
		std::string _name;
	public:
	//setters
		void setName(std::string name);
	//getters
		std::string	getName(void);
	//others
		void announce(void);
};

#endif
