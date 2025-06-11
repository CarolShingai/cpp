# include "../include/ShrubberyCreationForm.hpp"
# include "../include/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("Shrubbery Creation Form", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm constructor called for target: " << _target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: AForm(other), _target(other._target) {
    std::cout << "ShrubberyCreationForm copy constructor called for target: " << _target << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "ShrubberyCreationForm assignment operator called for target: " << _target << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > getGradeExecute())
        throw AForm::GradeTooLowException();

    std::ofstream file((_target + "_shrubbery").c_str());
    if (!file.is_open()){
        std::cerr << "Error opening file: " << _target << "_shrubbery" << std::endl;
        return;
    }
    file << "       &&& &&  & &&\n"
            "   && &\\/&\\|& ()|/ @, &&\n"
            "   &\\/(/&/&||/& /_/)_&/_&\n"
            "&() &\\/&|()|/&\\/ '% & ()\n"
            "&_\\/&_/&&&|&&|\\/&\\_@_/_& &&\n"
            "&&   && & &| &| /& & % ()& /&&\n"
            " ()&_---()&\\&\\|&&-&&--%---()~\n"
            "     &&    \\|||\n"
            "             |||\n"
            "             |||\n"
            "             |||\n"
            "           , -=-~ .\n";

}