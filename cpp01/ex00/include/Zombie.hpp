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
		Zombie(std::string name);
		void setName(std::string name);
		std::string	getName(void);
		void announce(void);
};

Zombie* newZombie(std::string name);

#endif
