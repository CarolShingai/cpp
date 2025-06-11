#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main(){
	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
	Intern intern;
	try {
		std::cout << GREEN << "Testando a criação de formulários com o Intern" << RESET << std::endl;
		std::cout << YELLOW << "Test 1: Formulário ShrubberyCreationForm" << RESET << std::endl;
		AForm *form1 = intern.makeForm("shrubbery creation", "home");
		std::cout << *form1 << std::endl;
		delete form1;

		std::cout << YELLOW << "Test 2: Formulário RobotomyRequestForm" << RESET << std::endl;
		AForm *form2 = intern.makeForm("robotomy request", "robot");
		std::cout << *form2 << std::endl;
		delete form2;

		std::cout << YELLOW << "Test 3: Formulário PresidentialPardonForm" << RESET << std::endl;
		AForm *form3 = intern.makeForm("presidential pardon", "president");
		std::cout << *form3 << std::endl;
		delete form3;

		// Testando a exceção
		std::cout << YELLOW << "Test 4: Tentativa de criar um formulário desconhecido" << RESET << std::endl;
		AForm *form4 = intern.makeForm("unknown form", "target");
		delete form4;
	} catch (const Intern::FormNotFoundException &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << GREEN << "===== Fim dos testes =====\n" << RESET << std::endl;

}
