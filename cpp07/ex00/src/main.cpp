#include "../include/whatever.hpp"
#include <string>

int main(){
    int a = 9, b = 5;
    std::cout << "Teste com valores int a:" << a << " b:" << b << std::endl;
    swap(a, b);
    std::cout << "Swap: a=" << a << " b=" << b << std::endl;
    std::cout << "min: " << min(a, b) <<std::endl;
    std::cout << "max: " << max(a, b) <<std::endl;

    std::string c = "pizza";
    std::string d = "batata";
    std::cout << "Teste com valores string c:" << c << " d:" << d << std::endl;
    swap(c, d);
    std::cout << "Swap: c=" << c << " d=" << d << std::endl;
    std::cout << "min: " << ::min(c, d) <<std::endl;
    std::cout << "max: " << ::max(c, d) <<std::endl;

    float e = 42.42, f = 42.42;
    std::cout << "Teste com valores float e:" << e << " f:" << f << std::endl;
    std::cout << "Swap: e=" << e << " f=" << f << std::endl;
    std::cout << "min: " << min(e, f) <<std::endl;
    std::cout << "max: " << max(e, f) <<std::endl;

    std::cout << "testes Subject" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}