#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void){
    _name = "Frag";
    _hitPoints = 100;
    _energyPoints = 100;
    _atackDamage = 30;
    std::cout << GREEN << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    _hitPoints = 100;
    _energyPoints = 50;
    _atackDamage = 20;
    std::cout << GREEN <<"FragTrap " << this->_name << " constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
    *this = copy;
    std::cout << BLUE << "FragTrap copy constructor called";
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
    this->_name =  copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_atackDamage = copy._atackDamage;
    std::cout << BLUE << "FragTrap copy operator called";
    return (*this);
}

FragTrap::~FragTrap(void){
    std::cout << RED << "FragTrap " << this->_name << " was destroyed" << RESET << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << BLUE << "FragTrap " << this->_name << " a high five is avaliable upon request." << RESET << std::endl;
}
