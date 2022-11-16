/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:21:12 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 16:21:13 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int
main(void) {

	PresidentialPardonForm	pardon("Tiger King");
	RobotomyRequestForm		robotomy("Bender");
	ShrubberyCreationForm	shrubbery("Garden");

	std::cout << std::endl;

	Bureaucrat				gigi("Gigi", 150);

	std::cout << std::endl;

	gigi.executeForm(pardon);
	gigi.signForm(pardon);

	try { gigi.incrGrade(5); }
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	gigi.signForm(pardon);
	gigi.executeForm(pardon);

	try { gigi.incrGrade(10); }
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	gigi.executeForm(pardon);

	std::cout << std::endl;

	try { gigi.incrGrade(134); }
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;


	gigi.signForm(robotomy);
	gigi.executeForm(robotomy);

	std::cout << std::endl;

	gigi.signForm(shrubbery);
	gigi.executeForm(shrubbery);

	std::cout << std::endl;
	return 0 ;
}
