#include "../include/easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main(){
	std::cout << GREEN << "####### Init Tests #######" << RESET << std::endl;
	std::cout << ORANGE << "TEST 1: container with list." << RESET << std::endl;
	std::list <int> _lista;
	for (int i = 0; i < 5; i++){
		_lista.push_back(i * 2);
	}
	std::cout << "Procurar valor 6 dentro da lista.\n";
    try {
		std::list<int>::iterator it = easyfind(_lista, 6);
		std::cout << "Resultado: " << *it << std::endl;
	} catch (const std::exception& e) {
        std::cout << RED << "Erro: " << e.what() << RESET << std::endl;
    }
	std::cout << "Procurar valor inexitente dentro da lista.\n";
	try {
		std::list<int>::iterator it = easyfind(_lista, 7);
		std::cout << "Resultado: " << *it << std::endl;
	} catch (const std::exception& e) {
        std::cout << RED << "Erro: " << e.what() << RESET << std::endl;
    }
	std::cout << ORANGE << "TEST 2: container with vector." << RESET << std::endl;
	std::vector<int> _vector;
	for (int i = 0; i < 5; i++){
		_vector.push_back(i * 3);
	}
	std::cout << "Procurar valor 6 dentro do vector.\n";
	try {
		std::vector<int>::iterator i = easyfind(_vector, 6);
		std::cout << "Resultado: " << *i << std::endl;
	} catch (const std::exception& e) {
		std::cout << RED << "Erro: " << e.what() << RESET << std::endl;
	}
	std::cout << "Procurar valor inexitente dentro do vector.\n";
	try {
		std::vector<int>::iterator i = easyfind(_vector, 7);
		std::cout << "Resultado: " << *i << std::endl;
	} catch (const std::exception& e) {
		std::cout << RED << "Erro: " << e.what() << RESET << std::endl;
	}
	std::cout << GREEN << "####### End Tests #######" << RESET << std::endl;
    return 0;
}
