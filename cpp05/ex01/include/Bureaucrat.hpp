#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <cstdlib>
# include "./GradeTooHighException.hpp"
# include "./GradeTooLowException.hpp"
# include "./Form.hpp"

// color
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

class Form;

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();

        const std::string getName();
        int getGrade();

        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);


#endif
