#include "../include/whatever.hpp"
#include <string>

int main(){
    int n1 = 9, n2 = 5;
    std::cout << GREEN << "Teste com valores int n1:" << n1 << " n2:" << RESET << n2 << std::endl;
    swap(n1, n2);
    std::cout << "Swap: n1=" << n1 << " n2=" << n2 << std::endl;
    std::cout << "min: " << min(n1, n2) <<std::endl;
    std::cout << "max: " << max(n1, n2) <<std::endl;

    std::string n3 = "pizza";
    std::string n4 = "batata";
    std::cout <<GREEN <<"Teste com valores string n3:" << n3 << " n4:" << n4 <<RESET << std::endl;
    swap(n3, n4);
    std::cout << "Swap: n3=" << n3 << " n4=" << n4 << std::endl;
    std::cout << "min: " << ::min(n3, n4) <<std::endl;
    std::cout << "max: " << ::max(n3, n4) <<std::endl;

    float n5 = 42.42, n6 = 42.42;
    std::cout << GREEN << "Teste com valores float n5:" << n5 << " n6:" << n6 <<RESET << std::endl;
    std::cout << "Swap: n5=" << n5 << " n6=" << n6 << std::endl;
    std::cout << "min: " << min(n5, n6) <<std::endl;
    std::cout << "max: " << max(n5, n6) <<std::endl;

    std::cout << GREEN << "Testes Subject" << RESET << std::endl;
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
