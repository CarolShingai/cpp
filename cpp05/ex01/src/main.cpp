#include "../include/Bureaucrat.hpp"

int main(){
	std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    try
	{
		std::cout << GREEN << "Test 1: Construtor Bureaucrat Default" << RESET << std::endl;
		Bureaucrat cheetos;
		std::cout << cheetos << std::endl;
		std::cout << GREEN << "Test 2: Construtor Bureaucrat with valid grade" << RESET << std::endl;
		Bureaucrat paul("Paul", 15);
		std::cout << paul << std::endl;
		std::cout << GREEN << "Test 3: Construtor Bureaucrat with too high grade" << RESET << std::endl;
		Bureaucrat sally("Sally", -5);
		std::cout << sally << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << GREEN << "Test 4: Construtor Bureaucrat with too low grade" << RESET << std::endl;
		Bureaucrat bill("Bill", 200);
		std::cout << bill << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << GREEN << "Test 5: Increment the Grade" << RESET << std::endl;
		Bureaucrat jenny("Jenny", 10);
		jenny.incrementGrade();
		std::cout << jenny << std::endl;
		std::cout << GREEN << "Test 6: Decrement the Grade" << RESET << std::endl;
		jenny.decrementGrade();
		jenny.decrementGrade();
		std::cout << jenny << std::endl;
		std::cout << GREEN << "Test 7: Surpess the upper grade" << RESET << std::endl;
		for (int i = 0; i < 20; i++)
			jenny.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat kelly("Kelly", 50);
		std::cout << GREEN << "Test 8: Surpess the upper grade" << RESET << std::endl;
		for (int i = 0; i < 200; i++)
			kelly.decrementGrade();
		std::cout << kelly << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
