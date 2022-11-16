/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 01:55:35 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/11 19:29:32 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name), _grade(grade) {

	if (this->_grade < 1) throw GradeTooHighException();
	if (this->_grade > 150) throw GradeTooLowException();
	std::cout << *this << ", got hired!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) { *this = src ; }

Bureaucrat::~Bureaucrat() {
	std::cout << *this << " got fired." << std::endl;
}

Bureaucrat &
Bureaucrat::operator=(Bureaucrat const & rhs) {

	this->_name = rhs._name;
	this->_grade = rhs._grade;

	return *this ;
}

std::string
Bureaucrat::getName() const { return this->_name ; }

int
Bureaucrat::getGrade() const { return this->_grade ; }

void
Bureaucrat::incrGrade(int value) {

	if ((this->_grade - value) < 1) throw GradeTooHighException();
	this->_grade -= value;

	std::cout << this->_name
	<< " got promoted by "
	<< value << " level(s)!"
	<< std::endl
	<< *this
	<< std::endl;
}

void
Bureaucrat::decrGrade(int value) {

	if ((this->_grade + value) > 150) throw GradeTooLowException();
	this->_grade += value;

	std::cout << this->_name
	<< " got demoted by "
	<< value << " level(s)."
	<< std::endl
	<< *this
	<< std::endl;
}

std::ostream&
operator<<(std::ostream& o, Bureaucrat const & i) {

	o << i.getName() << ", bureaucrat grade " << i.getGrade() ;

	return o ;
}
