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

void Bureaucrat::incrementGrade(){
    if (_grade < 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade(){
    if (_grade > 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(Form &form){
    try{
        form.beSigned(*this);
        std::cout << "Bureaucrat" << this->getName() << " signed " << form << std::endl;
    } catch (Form::GradeTooLowException &e){
        std::cout << "Bureaucrat" << this->getName() << " couldn't sign " << form << " because " << e.what() << std::endl;
    }
}


std::ostream &operator<<(std::ostream &os, Bureaucrat &bur){
    os << bur.getName() << " Bureaucrat grade: " << bur.getGrade();
    return (os);
}
