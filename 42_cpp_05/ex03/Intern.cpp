/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:22:59 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 23:23:00 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include <string>

Intern::Intern() {}

Intern::Intern(Intern const & src) { *this = src ; }

Intern::~Intern() {}

Intern &
Intern::operator=(Intern const & rhs) {
	(void)rhs;
	return *this ;
}

Form *
Intern::makeForm(std::string const name, std::string const target) {

	std::string	list[3] = {"pardon", "robotomy", "shrubbery"};

	int candidate;
	for (candidate = 0; candidate < 4; candidate++) {
		if (name.compare(list[candidate]) == 0)
			break ;
	}

	switch (candidate) {
		case 0:
			std::cout << "Intern creates " << name << " form." << std::endl;
			return new PresidentialPardonForm(target);
			break;
		case 1:
			std::cout << "Intern creates " << name << " form." << std::endl;
			return new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "Intern creates " << name << " form." << std::endl;
			return new ShrubberyCreationForm(target);
			break;
		default:
			throw FormNotFound();
			break;
	}
}
