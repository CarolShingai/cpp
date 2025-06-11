#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main(){
	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
	std::cout << "Creating Bureaucrat with name 'Fox'." << std::endl;
	Bureaucrat bureaucrat("Fox", 1);
	std::cout << bureaucrat << std::endl;
	std::cout << ORANGE << "Creating Forms."<< RESET << std::endl;
	std::cout << GREEN<<"Creating PresidentialPardonForm for target 'Zaphod'." << RESET << std::endl;
	PresidentialPardonForm presidentialForm("Zaphod");
	std::cout << GREEN << "Creating RobotomyRequestForm for target 'Marvin'." << RESET << std::endl;
	ShrubberyCreationForm shrubberyForm("Garden");
	std::cout << GREEN << "Creating RobotomyRequestForm for target 'Robot'." << RESET << std::endl;
	RobotomyRequestForm robotomyForm("Robot");
	std::cout << YELLOW << "Testing Form signing." << RESET << std::endl;
	bureaucrat.signForm(presidentialForm);
	bureaucrat.signForm(shrubberyForm);
	bureaucrat.signForm(robotomyForm);
	std::cout << YELLOW << "Testing Form execution." << RESET << std::endl;
	bureaucrat.executeForm(presidentialForm);
	bureaucrat.executeForm(shrubberyForm);
	bureaucrat.executeForm(robotomyForm);
	std::cout << GREEN << "===== Fim dos testes =====\n" << RESET << std::endl;

}
