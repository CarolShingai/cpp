#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>


// Colors
# define GREEN	"\033[92m"
# define RED	"\033[91m"
# define CYAN	"\033[96m"
# define YELLOW	"\033[93m"
# define BLUE	"\033[94m"
# define MAGENT	"\033[95m"
# define RESET	"\033[0m"

class Zombie
{
	private:
		std::string _name;
	public:
		~Zombie();
		Zombie(std::string name);
		void setName(std::string name);
		std::string	getName(void);
		void announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
