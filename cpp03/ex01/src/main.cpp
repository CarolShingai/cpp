#include "../include/ScavTrap.hpp"

int main(){
	ScavTrap sherlock = ScavTrap("Sherlock Holmes");
	ScavTrap mor = ScavTrap();
	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
	std::cout << GREEN << "Test 1: Atack" << RESET << std::endl;
	sherlock.attack(mor.getName());
	std::cout << GREEN << "Test 2: Damage" << RESET << std::endl;
	mor.takeDamage(sherlock.getAttackDamage());
	std::cout << GREEN << "Test 3: Guard Gate" << RESET << std::endl;
	mor.guardGate();
	sherlock.attack(mor.getName());
	mor.takeDamage(sherlock.getAttackDamage());
	mor.takeDamage(sherlock.getAttackDamage());
	mor.takeDamage(sherlock.getAttackDamage());
	mor.takeDamage(sherlock.getAttackDamage());
	std::cout << GREEN << "Test 4: Attack after ScavTrap died" << RESET << std::endl;
	mor.attack(sherlock.getName());
	std::cout << GREEN << "Test 5: Repair after ScavTrap died" << RESET << std::endl;
	mor.beRepaired(20);
}
