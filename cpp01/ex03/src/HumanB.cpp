#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
  this->_name = name;
  this->_weapon = NULL;
}

HumanB::~HumanB()
{
  std::cout << RED << "The HumanB " << this->_name << " was destroyed" << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
  this->_weapon = &newWeapon;
}

void HumanB::attack(void)
{
  if (this->_weapon)
    std::cout << PURPLE << this->_name << " attacks with their "
              << this->_weapon->getType() << RESET << std::endl;
  else
    std::cout << YELLOW << this->_name << " has no weapon to attack" << RESET << std::endl;
}