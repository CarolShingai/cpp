#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <string>

class rpn{
    private:
        std::stack<int> _stack;
    public:
        rpn();
        ~rpn();
        rpn(const rpn &other);
        rpn &operator=(const rpn &other);

        void run(std::string expression);
        void calculate(char op);
};


#endif