#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "./ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap&operator=(const FragTrap &copy);
		~FragTrap();

		void highFivesGuys(void);
};

#endif
