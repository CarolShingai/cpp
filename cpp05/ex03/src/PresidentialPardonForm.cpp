# include "../include/PresidentialPardonForm.hpp"
# include "../include/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("Presidential Pardon Form", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm constructor called for target: " << _target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: AForm(other), _target(other._target) {
    std::cout << "PresidentialPardonForm copy constructor called for target: " << _target << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "PresidentialPardonForm assignment operator called for target: " << _target << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executer) const {
    if (!getIsSigned())
        throw AForm::FormNotSignedException();
    if (executer.getGrade() > getGradeExecute())
        throw AForm::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

AForm *PresidentialPardonForm::create(const std::string &target){
    return new PresidentialPardonForm(target);
}
