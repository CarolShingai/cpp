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

AForm *Intern::makeForm(const std::string &formName, const std::string &target) {
    AForm *form = NULL;

    if (formName == "shrubbery creation") {
        form = new ShrubberyCreationForm(target);
    } else if (formName == "robotomy request") {
        form = new RobotomyRequestForm(target);
    } else if (formName == "presidential pardon") {
        form = new PresidentialPardonForm(target);
    } else {
        throw FormNotFoundException();
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}