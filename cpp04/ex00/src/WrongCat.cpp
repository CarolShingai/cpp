#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    this->type = "Wrong Cat";
    std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    this->type = copy.type;
    std::cout << "Wrong Cat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    if (this != &copy)
        this->type = copy.type;
    std::cout << "Wrong Cat copy operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << RED << "Wrong Cat destructor called" << RESET << std::endl;
}
 
void WrongCat::makeSound() const{
    std::cout << "Wrong sound auuuuu by the wrong cat." << std::endl;
}