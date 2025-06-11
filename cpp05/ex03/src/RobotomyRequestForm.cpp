#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("Robotomy Request Form", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm constructor called for target: " << _target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: AForm(other), _target(other._target) {
    std::cout << "RobotomyRequestForm copy constructor called for target: " << _target << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "RobotomyRequestForm assignment operator called for target: " << _target << std::endl;
    return *this;
}

AForm *RobotomyRequestForm::create(const std::string &target){
    return new RobotomyRequestForm(target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > getGradeExecute())
        throw AForm::GradeTooLowException();
    // Simulate a 50% chance of success
    if ((rand() + time(0)) % 2 == 0) {
        std::cout << "Bzzzzzz... " << _target << " has been robotomized successfully." << std::endl;
    // In rand() is needed to include a time seed to ensure randomness
    } else {
        std::cout << "Robotomy failed... " << _target << " has not been robotomized." << std::endl;
        return;
    }
}
