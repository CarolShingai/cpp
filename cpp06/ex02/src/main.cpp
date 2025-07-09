#include "../include/Base.hpp"
#include "../include/C.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"


int main(){
    std::srand(time(0));

    Base *ptr = generate();

    std::cout << "Test 1: Identificar o tipo do objeto pelo ponteiro." << std::endl;
    identify(ptr);
    std::cout << "Test 2: Identificar o tipo do objeto pela referencia." << std::endl;
    identify(*ptr);

    delete ptr;
    return 0;
}