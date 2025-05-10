#include "../include/Animal.hpp"
// Forma canonica
Animal::Animal(){
	this->type = "Animal";
	std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type) : type(type){
	std::cout <<GREEN << "Animal " << type << " was created." << RESET << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << "Animal copy constructor was called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy){
	std::cout << "Animal copy constructor was called" << std::endl;
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}

Animal::~Animal(){
	std::cout << RED << "Animal " << type << " had died!" << RESET << std::endl;
}

// metodo
void Animal::makeSound() const{
	std::cout << PURPLE << "Animal " << this->type << " makes general sound." << RESET << std::endl;
}
