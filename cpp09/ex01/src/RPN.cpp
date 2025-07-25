#include "../include/RPN.hpp"

rpn::rpn(){}

rpn::~rpn(){}

rpn::rpn(const rpn &other){
    this->_stack = other._stack;
}

rpn &rpn::operator=(const rpn &other){
    if (this != &other)
        this->_stack = other._stack;
    return *this;
}

void rpn::run(std::string expression){
    for (size_t i = 0; i < expression.size(); i++){
        if (expression[i] == ' ')
            continue;
        if (std::isdigit(expression[i]))
            this->_stack.push(expression[i] - '0');
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' 
            || expression[i] == '/'){
                if (this->_stack.size() < 2){
                    std::cerr << "Error: insuficiente number of operands." << std::endl;
                    return ;
                }
                calculate(expression[i]);
            }
        }
    std::cout << this->_stack.top() << std::endl;
}

void rpn::calculate(char op){
    int b = this->_stack.top(); this->_stack.pop();
    int a = this->_stack.top(); this->_stack.pop();

    switch (op)
    {
        case '+': 
            this->_stack.push(a + b);
            break;
        case '-': 
            this->_stack.push(a - b);
            break;
        case '*': 
            this->_stack.push(a * b);
            break;
        case '/': 
            if (b == 0){
                std::cerr << "Error: division by zero." << std::endl;
                return;
            }
            this->_stack.push(a / b);
            break;
    }

}