#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main(){
    Animal oni = Animal("Onitorrinco");
    Dog rex = Dog();
    Cat felix = Cat();

    oni.makeSound();
    rex.makeSound();
    felix.makeSound();
}