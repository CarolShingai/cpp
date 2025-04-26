#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main(){

    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << GREEN << "Test 1: Array Animals half dogs/ half cats" << std::endl;

    int animalTotal = 10;
    Animal *zoo[animalTotal];

    for (int i = 0; i < animalTotal / 2; i++){
        zoo[i] = new Dog();
    }
    for (int i = animalTotal/ 2 ; i < animalTotal; i++){
        zoo[i] = new Cat();
    }
    zoo[4]->makeSound();
    zoo[9]->makeSound();
    for (int i = 0; i < animalTotal ; i++)
        delete zoo[i];
    std::cout << GREEN << "Test 2: insert thoughts" << std::endl;
    Dog rex;
    rex.getBrain()->setBrain("I want Bacon", 1);
    std::cout << GREEN << "===== Fim dos testes =====" << RESET <<std::endl;
}
