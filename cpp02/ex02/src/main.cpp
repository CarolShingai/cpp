#include "../include/Fixed.hpp"

#include <iostream>
int main( void )
{
    Fixed a;
    Fixed b;
    Fixed c;

    a = 5;
    b = Fixed(12.8f);
    std::cout << GREEN << "===== Início dos testes =====\n" << RESET << std::endl;
    std::cout << GREEN << "-Operadores Aritmeticos-\n" << RESET << std::endl;
    std::cout << BLUE << "Test 1: Soma" << RESET << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;
    c = a + b;
    std::cout <<"soma: "<<c << std::endl;
    std::cout << BLUE << "Test 2: Subtracao" << RESET << std::endl;
    c = a - b;
    std::cout <<"subtracao: "<<c << std::endl;
    std::cout << BLUE << "Test 3: multiplicacao" << RESET << std::endl;
    c = a * b;
    std::cout <<"multiplicacao: "<<c << std::endl;
    std::cout << BLUE << "Test 4: Divisao" << RESET << std::endl;
    c = a / b;
    std::cout <<"Divisao: "<<c << std::endl;
    std::cout << GREEN << "\n-Incremento e Decremento-\n" << RESET << std::endl;
    std::cout << BLUE << "Test 5: Pre-incremento" << RESET << std::endl;
    ++a;
    std::cout <<"Pre-incremento: " << std::fixed << std::setprecision(10) << a.toFloat() << std::endl;
    std::cout << BLUE << "Test 6: Pos-incremento" << RESET << std::endl;
    a++;
    std::cout <<"Pos-incremento: " << std::fixed << std::setprecision(10) << a.toFloat() << std::endl;
    std::cout << BLUE << "Test 7: Pre-decremento" << RESET << std::endl;
    --a;
    std::cout <<"Pre-decremento: " << std::fixed << std::setprecision(10) << a.toFloat() << std::endl;
    std::cout << BLUE << "Test 8: Pos-decremento" << RESET << std::endl;
    a--;
    std::cout <<"Pos-decremento: " << std::fixed << std::setprecision(10) << a.toFloat() << std::endl;
    std::cout << GREEN << "\n-Operadores Logicos-\n" << RESET << std::endl;
    std::cout << BLUE << "Test 9: a > b: " << RESET << (a > b ? "true" : "false") << std::endl;
    std::cout << BLUE << "Test 10: a < b: " << RESET << (a < b ? "true" : "false") << std::endl;
    std::cout << BLUE << "Test 11: a >= b: " << RESET << (a > b ? "true" : "false") << std::endl;
    std::cout << BLUE << "Test 12: a <= b: " << RESET << (a < b ? "true" : "false") << std::endl;
    std::cout << BLUE << "Test 13: a == b: " << RESET << (a == b ? "true" : "false") << std::endl;
    std::cout << BLUE << "Test 14: a != b: " << RESET << (a != b ? "true" : "false") << std::endl;
    std::cout << GREEN << "\n-Max e Min-\n" << RESET << std::endl;
    std::cout << BLUE << "Test 15: Max" << RESET << std::endl;
    std::cout << "Max: " << Fixed::max(a,b) << std::endl;
    std::cout << BLUE << "Test 16: Min" << RESET << std::endl;
    std::cout << "Min: " << Fixed::min(a,b) << std::endl;
    return 0;
}