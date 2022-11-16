/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 01:55:38 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/11 19:30:58 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int
main(void) {

	try {

		Bureaucrat	mario("Mario", 150);

		try { mario.incrGrade(50) ; }
		catch (std::exception const & e) { std::cout << e.what() << std::endl; }

		std::cout << mario << std::endl;

		try { mario.decrGrade(1) ; }
		catch (std::exception const & e) { std::cout << e.what() << std::endl; }

		std::cout << mario << std::endl;
	}
	catch (std::exception const & e) { std::cout << e.what() << std::endl; }

	try {

		Bureaucrat	gigi("Gigi", 1);

		std::cout << gigi << std::endl;

		try { gigi.incrGrade(1) ; }
		catch (std::exception const & e) { std::cout << e.what() << std::endl; }

		std::cout << gigi << std::endl;
	}
	catch (std::exception const & e) { std::cout << e.what() << std::endl; }

	try {

		Bureaucrat	franco("Franco", 151);
	}
	catch (std::exception const & e) { std::cout << e.what() << std::endl; }

	return 0 ;
}
