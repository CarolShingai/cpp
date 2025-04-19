#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "The Weapon " << this->_type << " was created" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "The Weapon " << this->_type << " was destroyed" << std::endl;
}

std::string Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}