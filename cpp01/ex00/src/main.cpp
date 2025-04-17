#include "../include/Zombie.hpp"

int main(void)
{
	const std::string z_name[5] = {"Bob", "Alice", "Chad", "Diana", "Eve"};

	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
	std::cout << YELLOW << "First Teste"<< RESET << std::endl;
	std::cout << YELLOW <<"Creating a new Zombie in the Heap" << RESET << std::endl;
	std::cout << "Deleting the new Zombie..." << std::endl;
	Zombie* zombie = newZombie("Bob");
	zombie->announce();
	delete zombie;
	if (!zombie)
		std::cerr << RED << "Zombie still on the heap" << RESET << std::endl;
	std::cout<< YELLOW << "Second Teste" << RESET << std::endl;
	std::cout << YELLOW <<"Creating a multiple Zombies in the Heap" << RESET << std::endl;
	for (int i = 0; i < 5; i++)
	{
		Zombie *zombie = newZombie(z_name[i]);
		zombie->announce();
		delete zombie;
		if (!zombie)
			std::cerr << RED << "Zombie still on the heap" << RESET << std::endl;
	}
	std::cout<< YELLOW << "Third Teste" << RESET << std::endl;
	std::cout << YELLOW << "Creating a Zombie with randomChump in the Stack" << RESET << std::endl;
	randomChump("Chump");
	std::cout << GREEN << "===== Fim dos testes =====" << RESET <<std::endl;
}
