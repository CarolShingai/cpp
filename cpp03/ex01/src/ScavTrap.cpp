#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void){
    _name = "Scav";
    _hitPoints = 100;
    _energyPoints = 50;
    _atackDamage = 20;
    std::cout << GREEN << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    _hitPoints = 100;
    _energyPoints = 50;
    _atackDamage = 20;
    std::cout << GREEN <<"ScavTrap " << this->_name << " constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
    *this = copy;
    std::cout << BLUE << "ScavTrap copy constructor called";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    this->_name =  copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_atackDamage = copy._atackDamage;
    std::cout << BLUE << "ScavTrap copy operator called";
    return (*this);
}

ScavTrap::~ScavTrap(void){
    std::cout << RED << "ScavTrap " << this->_name << " was destroyed" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (_energyPoints <= 0){
        std::cout << ORANGE << "ScavTrap " << this->_name << " has no energy to attack." << RESET << std::endl;
        return ;
    }
    if (_hitPoints <= 0){
        std::cout << ORANGE << "ScavTrap " << this->_name << " is dead. It has no hit points." << RESET << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " gives a huge attack " << target << " causing "
    << this->_atackDamage << " points of damage!" << RESET << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate(){
    std::cout << BLUE << "ScavTrap " << this->_name << " is now in Gate keeper mode." << RESET << std::endl;
}
