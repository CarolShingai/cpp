/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:07:30 by cshingai          #+#    #+#             */
/*   Updated: 2025/06/05 17:07:31 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

// constructor
AForm::AForm() : _name("Unknow"), _isSigned(false), _gradeSign(150), _gradeExecute(150){}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExecute)
: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute){
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	_isSigned = false;
}

AForm::~AForm(){}

AForm::AForm(const AForm &copy)
	: _name(copy._name),
	  _isSigned(copy._isSigned),
	  _gradeSign(copy._gradeSign),
	  _gradeExecute(copy._gradeExecute){}

AForm &AForm::operator=(const AForm &copy){
	if (this != &copy)
		this->_isSigned = copy._isSigned;
	return *this;
}

// getter
const std::string AForm::getName() const{
	return this->_name;
}

int AForm::getGradeSign() const{
	return this->_gradeSign;
}

int AForm::getGradeExecute() const{
	return this->_gradeExecute;
}

bool AForm::getIsSigned() const{
	return this->_isSigned;
}

// methode
void AForm::beSigned(Bureaucrat &bureaucrat){
	if(bureaucrat.getGrade() <= getGradeSign())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}



std::ostream &operator<<(std::ostream &os, AForm &form) {
	os << form.getName() << ", Grade to sign is " << form.getGradeSign()
	<< ", grade to execute is " << form.getGradeExecute() << ", signature status " << form.getIsSigned();
	return (os);
}
