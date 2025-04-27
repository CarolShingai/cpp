#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main(){

    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << GREEN << "Test 1: Try instanciate a object in AAnimal" << RESET << std::endl;
    // AAnimal sauro;
    std::cout << GREEN << "\nTest 2: Dog sound" << RESET << std::endl;
    Dog rex;
    rex.makeSound();
    std::cout << GREEN << "\nTest 3: insert thoughts in Dog" << RESET << std::endl;
    Dog original;
    original.getBrain()->setBrain("I want Bacon!", 1);
    original.getBrain()->setBrain("Let's play ball!", 2);
    std::cout << "Rex pov: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "Rex pov: " << original.getBrain()->getIdea(2) << std::endl;
    std::cout << GREEN << "\nTest 4: check deep copy on Dog" << RESET << std::endl;
    Dog copy = original;
    std::cout << ORANGE << "Changing the copy thought" << RESET << std::endl;
    copy.getBrain()->setBrain("Walk? let's walk? Walk, Walk...", 1);
    std::cout << "Rex pov: " << original.getBrain()->getIdea(1) << std::endl;
    std::cout << "Rex pov: " << copy.getBrain()->getIdea(1) << std::endl;
    std::cout << GREEN << "\nTest 5: Cat sound" << RESET << std::endl;
    Cat felix;
    felix.makeSound();
    std::cout << GREEN << "\nTest 6: insert thoughts in Cat" << RESET << std::endl;
    Cat orig;
    orig.getBrain()->setBrain("I want sleep!", 1);
    orig.getBrain()->setBrain("Miau, Scratch my back!", 2);
    std::cout << "Felix pov: " << orig.getBrain()->getIdea(1) << std::endl;
    std::cout << "Felix pov: " << orig.getBrain()->getIdea(2) << std::endl;
    std::cout << GREEN << "\nTest 7: check deep copy on Cat" << RESET << std::endl;
    Cat cop = orig;
    std::cout << ORANGE << "Changing the copy thought" << RESET << std::endl;
    cop.getBrain()->setBrain("Nice, a box!", 1);
    std::cout << "Felix pov: " << orig.getBrain()->getIdea(1) << std::endl;
    std::cout << "Felix pov: " << cop.getBrain()->getIdea(1) << std::endl;
    std::cout << GREEN << "===== Fim dos testes =====" << RESET <<std::endl;
}
