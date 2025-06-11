#ifndef AFORM_HPP
# define AFORM_HPP

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

class Bureaucrat;

class AForm{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeSign;
		const int _gradeExecute;
	public:
		AForm();
		AForm(const std::string name, const int gradeSign, const int gradeExecute);
		virtual ~AForm();
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);

		// Exception
		class GradeTooHighException : public std::exception {
			public:
			virtual const char *what() const throw(){
				return("Grade too High");
			}
		};
		
		class GradeTooLowException : public std::exception {
			public:
			virtual const char *what() const throw(){
				return("Grade too Low");
			}
		};

		class FormNotSignedException : public std::exception {
			public:
			virtual const char *what() const throw(){
				return("Form not signed");
			}
		};

		//getter
		const std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getIsSigned() const;
		// actions
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
	};

std::ostream &operator<<(std::ostream &os, AForm &form);


#endif
