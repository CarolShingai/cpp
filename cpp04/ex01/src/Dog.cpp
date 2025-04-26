#include "../include/Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    std::cout << GREEN << "Dog constructor called." << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy){
    std::cout << "Dog copy constructor called." << std::endl;
    this->type = copy.type;
}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Dog copy operator called." << std::endl;
    return (*this);
}

Dog::~Dog(){
    std::cout << RED << "🐶 Dog had run away 💨💨💨!" << RESET << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Aauu Aauu Aauu Aauu Aauuu" << std::endl;
}

Brain *Dog::getBrain() const{
    return (_brain);
}
