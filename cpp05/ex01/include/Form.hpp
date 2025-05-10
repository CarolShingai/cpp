#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <ostream>
# include <string>
# include <cstdlib>
# include "./GradeTooHighException.hpp"
# include "./GradeTooLowException.hpp"
# include "./Bureaucrat.hpp"

// color
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[38;5;93m"
# define CYAN "\033[36m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

class Form{
	private:
		const std::string _name;
		bool _isSigned = false;
		const int _gradeSign;
		const int _gradeExecute;
	public:
		Form();
		Form(const std::string name, const int gradeSign, const int gradeExecute);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &copy);
};

std::ostream &operator<<(std::ostream &os, Form &form);


#endif
