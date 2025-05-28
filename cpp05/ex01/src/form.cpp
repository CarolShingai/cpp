#include "../include/Form.hpp"

// constructor
Form::Form() : _name("Unknow"), _isSigned(false), _gradeSign(150), _gradeExecute(150){}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute)
: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
	_isSigned = false;
}

Form::Form(const Form &copy)
	: _name(copy._name),
	  _isSigned(copy._isSigned),
	  _gradeSign(copy._gradeSign),
	  _gradeExecute(copy._gradeExecute){}

Form &Form::operator=(const Form &copy){
	if (this != &copy)
		this->_isSigned = copy._isSigned;
	return *this;
}

// getter
const std::string Form::getName() const{
	return this->_name;
}

const int Form::getGradeSign() const{
	return this->_gradeSign;
}

const int Form::getGradeExecute() const{
	return this->_gradeExecute;
}

bool Form::getIsSigned() const{
	return this->_isSigned;
}

// class exception
const char* Form::GradeTooHighException::what( void ) const throw(){
	return "Grade too High.";
}

const char* Form::GradeTooLowException::what( void ) const throw(){
	return "Grade too Low.";
}

// methode
void Form::beSigned(Bureaucrat &bureaucrat){
	if(bureaucrat.getGrade() <= getGradeSign())
		this->_isSigned == true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Form const &form) {
	os << form.getName() << ", Grade to sign is " << form.getGradeSign()
	<< ", grade to execute is " << form.getGradeExecute() << ", signature status " << form.getIsSigned();
	return (os);
}
