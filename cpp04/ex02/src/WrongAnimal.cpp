#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "WrongAnimal batata was created.";
}

// Forma canonica
WrongAnimal::WrongAnimal(std::string type) : type(type){
	std::cout << GREEN << "WrongAnimal " << type << " was created." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << "WrongAnimal copy constructor was called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
	std::cout << "WrongAnimal copy constructor was called" << std::endl;
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal " << type << " had died! 👻" << std::endl;
}

// metodo
void WrongAnimal::makeSound() const{
	std::cout << ORANGE << "This is the WrongAnimal " << this->type << " doing a wrong sound." << RESET << std::endl;
}
