#include "../include/Base.hpp"
#include "../include/C.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"

Base::~Base() {}

// o compilador gera um construtor padrao, mesmo que nao exista
// um construtor no codigo das concretas e das classe abstratas.

Base *generate(void){
    int random = std::rand() % 3;

    if (random == 0) return new A();
    if (random == 1) return new B();
    return new C();
}

void    identify(Base *p){
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknow Type" << std::endl;
}

void    identify(Base &p){
    try{
        dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    } catch (...) {}
    try{
        dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    } catch (...) {}
    try{
        dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    } catch (...) {}
}