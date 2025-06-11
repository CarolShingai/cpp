# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <iostream>
# include <string>

class AForm;

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    static AForm *create(const std::string &target);
private:
    std::string _target;
};
# endif
