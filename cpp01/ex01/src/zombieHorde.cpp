#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		std::cerr << RED << "Error: N must be greater than 0" << RESET << std::endl;
	if (N < 0)
		N = 0;
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);

		std::cout << GREEN << "the Zombie " << horde[i].getName() << " was created" << RESET << std::endl;
	}
	return (horde);
}
