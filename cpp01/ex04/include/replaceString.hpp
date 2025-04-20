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
	int errorMessage(const std::string &message)
	{
		std::cerr << RED << message << RESET << std::endl;
		return (0);
	}

	void replaceString(std::string &line, const std::string &str1, const std::string &str2, int &count)
	{
		std::string replacedLine;
		size_t pos = 0;
		size_t found = 0;
		while ((found = line.find(str1, pos)) != std::string::npos)
		{
			replacedLine.append(line, pos, found - pos);
			replacedLine += str2;
			pos = found + str1.length();
			count++;
		}
		replacedLine.append(line, pos, line.length() - pos);
		line = replacedLine;
	}

	int readFile(const std::string &filename, const std::string &str1, const std::string &str2)
	{
		int count = 0;
		std::ifstream file(filename.c_str());
		if (!file)
			return(errorMessage("Error opening the file."));
		if (file.peek() == EOF)
			return (errorMessage("Error: file is empty."));
		std::cout << GREEN << "File opening with success" << RESET << std::endl;
		std::ofstream outputInFile((filename + ".replace").c_str());
		if (!outputInFile)
			return (errorMessage("Error opening the file."));
		if (str1.empty())
			return (errorMessage("Error: str1 is empty."));
		std::string line;
		while (std::getline(file, line))
		{
			replaceString(line, str1, str2, count);
			outputInFile << line << std::endl;
		}
		if (count == 0)
			return (errorMessage("Error: str1 not found in the file."));
		std::cout << GREEN << "String replaced with success" << RESET << std::endl;
		file.close();
		outputInFile.close();
		return (1);
	}
}


#endif
