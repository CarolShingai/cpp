#include "../include/Zombie.hpp"

int main()
{
	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
	std::cout << YELLOW << "Test 1" << RESET << std::endl;
	std::cout << YELLOW << "Creating a horde of zombies..."<< RESET << std::endl;
	Zombie* horde = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	std::cout << YELLOW << "Test 2" << RESET << std::endl;
	std::cout << YELLOW << "Creating a empty horde of zombies..."<< RESET << std::endl;
	Zombie* emptyhorde = zombieHorde(0, "Zombie");
	for (int i = 0; i < 0; i++)
		emptyhorde[i].announce();
	delete [] emptyhorde;
	std::cout << YELLOW << "Test 3" << RESET << std::endl;
	std::cout << YELLOW << "Creating a negative horde of zombies..."<< RESET << std::endl;
	emptyhorde = zombieHorde(-1, "Zombie");
	for (int i = 0; i < -1; i++)
		emptyhorde[i].announce();
	delete [] emptyhorde;
	std::cout << GREEN << "===== Fim dos testes =====" << RESET <<std::endl;
}
