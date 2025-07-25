#include "../include/RPN.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Error: wrong number of arguments." << std::endl;
        return 1;
    }
    try
    {
        rpn expression;
        expression.run(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}