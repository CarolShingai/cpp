#include "../include/ClapTrap.hpp"
// Forma canônica
ClapTrap::ClapTrap(void){
    _name = "Unknow";
    _hitPoints = 10;
    _energyPoints = 10;
    _atackDamage = 0;
    std::cout << GREEN << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
    _hitPoints = 10;
    _energyPoints = 10;
    _atackDamage = 0;
    std::cout << GREEN <<"ClapTrap " << this->_name << " constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
    std::cout << BLUE << "ClapTrap copy constructor called";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    this->_name =  copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_atackDamage = copy._atackDamage;
    std::cout << BLUE << "ClapTrap copy operator called";
    return (*this);
}

ClapTrap::~ClapTrap(void){
    std::cout << RED << "ClapTrap " << this->_name << " was destroyed" << RESET << std::endl;
}

// Metodos ClapTrap
void ClapTrap::attack(const std::string& target){
    if (_energyPoints <= 0){
        std::cout << ORANGE << "ClapTrap " << this->_name << " has not enough energy to attack." << RESET << std::endl;
        return ;
    }
    if (_hitPoints <= 0){
        std::cout << ORANGE << "ClapTrack " << this->_name << " is dead. It has no hit points." << RESET << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing "
    << this->_atackDamage << " points of damage!" << RESET << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints <= 0){
        std::cout << ORANGE << "ClapTrap " << this->_name << " is dead" << RESET << std::endl;
        return ;
    }
    this->_hitPoints -= amount;
    std::cout << YELLOW << "Claptrap " << this->_name << " takes " << amount << " points of damage.\n"
    << RESET << "Hit Points: " << this->_hitPoints  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints <= 0){
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        return ;
    }
    if (_energyPoints <= 0){
        std::cout << ORANGE << "ClapTrap " << this->_name << " has not enough energy to repair itself" << RESET << std::endl;
        return ;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << PURPLE << "ClapTrap " << this->_name << " repaired " << amount << " hit points \n"
    << RESET <<"Hit Points: " << this->_hitPoints << std::endl;
}

// getters
std::string ClapTrap::getName(){
    return (this->_name);
}

int ClapTrap::getHitPoints(){
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(){
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(){
    return (this->_atackDamage);
}
