#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "The Zombie " << this->_name << " was created" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

void Zombie::announce(void)
{
	std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}
