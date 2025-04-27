#include "../include/AAnimal.hpp"
// Forma canonica
AAnimal::AAnimal(){
	this->type = "Animal";
	std::cout << GREEN << "Animal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type){
	std::cout <<GREEN << "Animal " << type << " was created." << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy){
	std::cout << "Animal copy constructor was called" << std::endl;
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy){
	std::cout << "Animal copy constructor was called" << std::endl;
	if(this != &copy)
		this->type = copy.type;
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << RED << "Animal " << type << " had died!" << RESET << std::endl;
}

// metodo
void AAnimal::makeSound() const{
	std::cout << PURPLE << "Animal " << this->type << " makes general sound." << RESET << std::endl;
}
