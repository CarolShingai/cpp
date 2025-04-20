#include "../include/Harl.hpp"

int main()
{
    Harl harl;

    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << YELLOW << "test 1: Wrong Fuction" << RESET << std::endl;
    harl.complain("HI");
    std::cout << YELLOW << "test 2: Empty String" << RESET << std::endl;
    harl.complain("");
    std::cout << YELLOW << "test 3: Debug Level" << RESET << std::endl;
    harl.complain("DEBUG");
    std::cout << YELLOW << "test 4: Info Level" << RESET << std::endl;
    harl.complain("INFO");
    std::cout << YELLOW << "test 5: Warning Level" << RESET << std::endl;
    harl.complain("WARNING");
    std::cout << YELLOW << "test 6: Error Level" << RESET << std::endl;
    harl.complain("ERROR");

}