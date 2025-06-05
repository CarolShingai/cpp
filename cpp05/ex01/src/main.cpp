#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(){
	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    try
	{
		std::cout << GREEN << "Test: Create a form with valid values" << RESET << std::endl;
		Form f1("Form A", 60, 50);
		std::cout << f1 << std::endl;
		std::cout << PURPLE << "Test 1: Bureaucrat with grade to sign" << RESET << std::endl;
		Bureaucrat b1("Piter", 60);
		std::cout << b1 << std::endl;

		b1.signForm(f1);
		std::cout << b1 << std::endl;
		std::cout << PURPLE << "Test 2: Bureaucrat without grade to sign" << RESET << std::endl;
		Bureaucrat b2("Laura", 70);
		std::cout << b2 << std::endl;

		b2.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << GREEN << "Test: Exceptions(form)" << RESET << std::endl;
		std::cout << PURPLE << "Test 3: Form with grade out of bounds(too high)" << RESET << std::endl;
		Form f2("Form B", 0, 50);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << PURPLE << "Test 4: Form with grade out of bounds(too high)" << RESET << std::endl;
		Form f3("Form C", 151, 40);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
