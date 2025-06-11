#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern &operator=(const Intern &rhs);

    AForm *makeForm(const std::string &formName, const std::string &target);
    class FormNotFoundException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return "Form not found.";
        }
    };
};

#endif