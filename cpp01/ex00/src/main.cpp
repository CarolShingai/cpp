#include "../include/Zombie.hpp"

int main(void)
{
	std::cout << "Creating a new Zombie in the Heap" << std::endl;
	Zombie* zombie = newZombie("Bob");
	zombie->announce();
	std::cout << "Creating a Zombie with randomChump in the Stack" << std::endl;
	randomChump("Chump");
	std::cout << "Deleting the new Zombie..." << std::endl;
	delete zombie;
}
