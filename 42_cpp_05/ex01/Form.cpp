/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:19:45 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 16:19:46 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {}

Form::Form(std::string const & name, const int signGrade, const int execGrade)
: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1) throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150) throw GradeTooLowException();

	std::cout << "Form [ " << this->_name << " ] created:" << std::endl;
	std::cout << *this << std::endl;
}

Form::Form(Form const & src) { *this = src ; }

Form::~Form() {
	std::cout << "Form [ " << this->_name << " ] destroyed." << std::endl;
}


Form &
Form::operator=(Form const & rhs) {

	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_signGrade = rhs._signGrade;
	this->_execGrade = rhs._execGrade;

	return *this ;
}

std::string
Form::getName() const { return this->_name ; }

bool
Form::getSigned() const { return this->_signed ; }

int
Form::getSignGrade() const { return this->_signGrade ; }

int
Form::getExecGrade() const { return this->_execGrade ; }

void
Form::beSigned(Bureaucrat & bureaucrat) {

	if (bureaucrat.getGrade() > this->_signGrade) throw GradeTooHighException();
	this->_signed = true;
}

std::ostream&
operator<<(std::ostream& o, Form const & i) {

	o
	<< "----- [ FORM REPORT ] -----" << std::endl
	<< "Form name:\t" << i.getName() << std::endl
	<< "Sign grade:\t" << i.getSignGrade() << std::endl
	<< "Exec grade:\t" << i.getExecGrade() << std::endl
	<< "Sign status:\t" << i.getSigned() << std::endl
	<< "---------------------------";

	return o ;
}
