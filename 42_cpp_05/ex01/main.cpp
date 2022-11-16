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

#include <iostream>

int
main(void) {

	try {
		Form		hats("Hats", 50, 1);
		Bureaucrat	gigi("Gigi", 30);

		gigi.signForm(hats);
		std::cout << hats << std::endl;

		gigi.decrGrade(21);
		gigi.signForm(hats);
		std::cout << hats << std::endl;

		Form		umbrellas("Umbrellas", 50, 0);
	}
	catch (std::exception const & e) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	try {
		Form		hats("Hats", 50, 1);
		Bureaucrat	gigi("Gigi", 301);
	}
	catch (std::exception const & e) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	return 0 ;
}
