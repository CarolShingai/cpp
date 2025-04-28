#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "./GradeTooHighException.hpp"
# include "./GradeTooLowException.hpp"

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

        Bureaucrat &operator++();
        Bureaucrat operator++(int);
        Bureaucrat &operator--();
        Bureaucrat operator--(int);

        // void GradeTooLowException();
        // void GradeTooHighException();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);


#endif