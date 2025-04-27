#include "../include/Dog.hpp"

Dog::Dog() : AAnimal(){
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << GREEN << "Dog constructor called." << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : AAnimal(copy){
    std::cout << "Dog copy constructor called." << std::endl;
    this->_brain = new Brain (*copy._brain);
}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy){
        this->type = copy.type;
        delete this->_brain;
        this->_brain = new Brain (*copy._brain);
    }
    std::cout << "Dog copy operator called." << std::endl;
    return (*this);
}

Dog::~Dog(){
    delete this->_brain;
    std::cout << RED << "🐶 Dog had run away 💨💨💨!" << RESET << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Aauu Aauu Aauu Aauu Aauuu" << std::endl;
}

Brain *Dog::getBrain() const{
    return (this->_brain);
}
