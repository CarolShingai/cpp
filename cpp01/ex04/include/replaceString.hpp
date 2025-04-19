#ifndef REPLACESTRING_HPP
# define REPLACESTRING_HPP

# include <string>
# include <iostream>
# include <fstream>
	// Colors
# define GREEN	"\033[92m"
# define RED	"\033[91m"
# define YELLOW	"\033[93m"
# define BLUE	"\033[94m"
# define PURPLE	"\033[95m"
# define RESET	"\033[0m"

namespace replaceFunctions
{
	int readFile(const std::string &filename)
	{
		std::ifstream file(filename.c_str());
		if (!file)
		{
			std::cerr << RED << "Error opening the file." << RESET << std::endl;
			return (0);
		}
		std::cout << GREEN << "File opening with success";
		// std::ofstream outputInFile(filename);
		return (1);
	}
}


#endif
