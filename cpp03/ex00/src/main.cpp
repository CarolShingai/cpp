#include "../include/ClapTrap.hpp"

int main(){
	ClapTrap darth = ClapTrap("Darth Vader");
	ClapTrap obi = ClapTrap("Obi-Wan Kenobi");
	ClapTrap force = ClapTrap();

	std::cout << BLUE "Test 1: Atack" << RESET << std::endl;
	darth.attack(obi.getName());
	std::cout << BLUE "Test 2: Atack no name" << RESET << std::endl;
	force.attack(darth.getName());
	std::cout << BLUE "Test 3: Damage" << RESET << std::endl;
	obi.takeDamage(5);
	std::cout << BLUE "Test 3: Damage no name" << RESET << std::endl;
	force.takeDamage(8);
	std::cout << BLUE "Test 4: Repair with Hit Points and Energy" << RESET << std::endl;
	obi.beRepaired(5);
	std::cout << BLUE "Test 5: Repair after ClapTrap died" << RESET << std::endl;
	darth.attack(obi.getName());
	obi.takeDamage(10);
	obi.beRepaired(5);
	std::cout << BLUE "Test 6: Attack after ClapTrap died" << RESET << std::endl;
	obi.attack(darth.getName());
	darth.attack(obi.getName());
	darth.beRepaired(5);
	darth.attack(obi.getName());
	darth.attack(force.getName());
	darth.beRepaired(2);
	darth.attack(force.getName());
	darth.attack(obi.getName());
	darth.attack(force.getName());
	std::cout << BLUE "Test 7: Repair after ClapTrap has no energy" << RESET << std::endl;
	darth.beRepaired(1);
	std::cout << BLUE "Test 8: Attack after ClapTrap has no energy" << RESET << std::endl;
	darth.attack(force.getName());
}
