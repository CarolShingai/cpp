#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main(){
    Animal oni = Animal("Onitorrinco");
    Dog rex = Dog();
    Cat felix = Cat();
    WrongAnimal dragon = WrongAnimal("Dragon");
    WrongCat orion = WrongCat();

    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << GREEN << "Test 1: Animal makes a sound:" << std::endl;
    oni.makeSound();
    std::cout << GREEN << "Test 2: Dog makes a sound:" << std::endl;
    rex.makeSound();
    std::cout << GREEN << "Test 3: Cat makes a sound:" << std::endl;
    felix.makeSound();
    std::cout << GREEN << "Test 4: Wrong Animal makes a sound:" << std::endl;
    dragon.makeSound();
    std::cout << GREEN << "Test 5: Wrong Cat makes a sound:" << std::endl;
    orion.makeSound();
}