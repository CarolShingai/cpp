#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknow"), _grade(150){}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
    if (this != &copy)
        this->_grade = copy._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

const std::string Bureaucrat::getName(){
    return (this->_name);
}

int Bureaucrat::getGrade(){
    return (this->_grade);
}