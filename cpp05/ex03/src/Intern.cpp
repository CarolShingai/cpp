#include "../include/Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

// Copy constructor
Intern::Intern(const Intern &src) {
    (void)src;
}

// Assignment operator
Intern &Intern::operator=(const Intern &rhs) {
    (void)rhs;
    return *this;
}

//Nao usar if ou else
AForm *Intern::makeForm(const std::string &formName, const std::string &target) {
    std::string forms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidencial pardon"
    };

    AForm *(*formCreator[3])(const std::string &) = {
        &ShrubberyCreationForm::create,
        &RobotomyRequestForm::create,
        &PresidentialPardonForm::create
    };

    for (int i = 0; i < 3; ++i) {
        if (formName == forms[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return formCreator[i](target);
        }
    }
    std::cout << "Intern couldn't find the form: " << formName << std::endl;
    return NULL;
}
