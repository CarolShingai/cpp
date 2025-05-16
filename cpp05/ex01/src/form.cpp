#include "../include/Form.hpp"

Form::Form() : _name("Unknow"), _isSigned(false), _gradeSign(150), _gradeExecute(150){}

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) {
	_name = name;
	_isSigned = false;
	_gradeSign = gradeSign;
	_gradeExecute = gradeExecute;
}

Form::Form(const Form &copy){
	_name = copy._name;
	_isSigned = copy._isSigned;
	_gradeSign = copy._gradeSign;
	_gradeExecute = copy._gradeExecute;
}

Form &Form::operator=(const Form &copy){
	if (this != &copy){
		this->_name = copy._name;
		this->_isSigned = copy._isSigned;
		this->_gradeSign = copy._gradeSign;
		this->_gradeExecute = copy._gradeExecute;
	}
	return *this;
}
