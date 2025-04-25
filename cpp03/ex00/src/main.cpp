#include "../include/ClapTrap.hpp"

int main(){
	ClapTrap frank = ClapTrap("Frank");
	ClapTrap john = ClapTrap("John");

	std::cout << "test 1: Atack" << std::endl;
	frank.attack("john");
	john.takeDamage(5);
	frank.attack("john");
	john.beRepaired(5);
	john.takeDamage(10);
	john.attack("frank");
}
