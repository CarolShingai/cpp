#include "../include/replaceString.hpp"




int main()
{
    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << YELLOW << "test 1: Non-Existent File" << RESET << std::endl;
    replaceFunctions::readFile("nonexistent.txt", "x", "y");
    std::cout << YELLOW << "test 2: Empty File" << RESET << std::endl;
    replaceFunctions::readFile("emptyfile.txt", "x", "y");
    std::cout << YELLOW << "test 3: Empty str1" << RESET << std::endl;
    replaceFunctions::readFile("/home/carol/42sp/cpp00/cpp01/ex04/src/main.cpp", "", "x");
    std::cout << YELLOW << "test 4: Str1 Not Found" << RESET << std::endl;
    replaceFunctions::readFile("text.txt", "batata", "Cadete");
    std::cout << YELLOW << "test 5: Right File" << RESET << std::endl;
    replaceFunctions::readFile("text.txt", "Processador", "Cadete");
    std::cout << YELLOW << "test 6: Correct Path" << RESET << std::endl;
	replaceFunctions::readFile("/home/carol/42sp/cpp00/cpp01/ex04/src/main.cpp", "main", "bacon");

}
