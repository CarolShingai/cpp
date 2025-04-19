#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << GREEN << "The HumanA " << this->_name << " was created" << RESET << std::endl;
}

HumanA::~HumanA()
{
    std::cout << RED << "The HumanA " << this->_name << " was destroyed" << RESET << std::endl;
}

void HumanA::attack(void)
{
    std::cout << PURPLE << this->_name << " attacks with their "
    << this->_weapon.getType() << RESET << std::endl;
} 