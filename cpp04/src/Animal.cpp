#include "../include/Animal.hpp"

Animal::Animal(std::string type) : type(type){
	std::cout << "Animal " << type << " was created." << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << "Animal copy constructor was called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy){
	std::cout << "Animal copy constructor was called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal " << type << " had died" << std::endl;
}
