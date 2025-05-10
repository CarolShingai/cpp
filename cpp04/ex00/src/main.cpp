#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main(){
    Animal *oni = new Animal("Ornitorrinco");
    Animal *rex = new Dog();
    Animal *felix = new Cat();
    WrongAnimal *dragon = new WrongAnimal("Dragon");
    WrongAnimal *orion = new WrongCat();

    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << GREEN << "Test 1: Animal makes a sound:" << RESET << std::endl;
    oni->makeSound();
    std::cout << GREEN << "Test 2: Dog makes a sound:" << RESET << std::endl;
    rex->makeSound();
    std::cout << GREEN << "Test 3: Cat makes a sound:" << RESET << std::endl;
    felix->makeSound();
    std::cout << GREEN << "Test 4: Wrong Animal makes a sound:" << RESET << std::endl;
    dragon->makeSound();
    std::cout << GREEN << "Test 5: Wrong Cat makes a sound:" << RESET << std::endl;
    orion->makeSound();

    std::cout << GREEN << "Test 6: Destructors" << RESET << std::endl;
    delete(rex);
    delete(felix);
    delete(dragon);
    delete(orion);
    delete(oni);

    std::cout << GREEN << "===== Fim dos testes =====" << RESET <<std::endl;
}
