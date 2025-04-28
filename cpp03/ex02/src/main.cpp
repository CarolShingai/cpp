#include "../include/FragTrap.hpp"

int main(){
	FragTrap sanji = FragTrap("Sanji");
	FragTrap zoro = FragTrap();

	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
	std::cout << GREEN << "Test 1: Atack" << RESET << std::endl;
	sanji.attack(zoro.getName());
	std::cout << GREEN << "Test 2: Damage" << RESET << std::endl;
	zoro.takeDamage(sanji.getAttackDamage());
	std::cout << GREEN << "Test 3: High Five Request" << RESET << std::endl;
	sanji.highFivesGuys();
	zoro.takeDamage(sanji.getAttackDamage());
	zoro.takeDamage(sanji.getAttackDamage());
	zoro.takeDamage(sanji.getAttackDamage());
	zoro.takeDamage(sanji.getAttackDamage());
	std::cout << GREEN << "Test 4: Attack after FragTrap died" << RESET << std::endl;
	zoro.attack(sanji.getName());
	std::cout << GREEN << "Test 5: Repair after FragTrap died" << RESET << std::endl;
	zoro.beRepaired(10);
}
