#include "../include/Cat.hpp"

Cat::Cat() : Animal(){
    this->type = "Cat";
    std::cout << GREEN << "Cat constructer called" << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy){
    this->type = copy.type;
    std::cout << "Cat copy constructer called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Cat copy operator called" << std::endl;
    return (*this);
}

Cat::~Cat(){
    std::cout << RED << "🐈‍ Cat had gone!" << RESET << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Miau Miau Miauuuu..." << std::endl;
}

Brain *Cat::getBrain() const{
    return(_brain);
}
