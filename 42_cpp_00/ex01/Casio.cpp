/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:19:57 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/02 15:19:58 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

int
main(void) {

	PhoneBook	book;
	std::string	cmd;

	book.overview();
	std::cout << CLEAR;
	std::cout << RED << "CRAPPY AWESOME PHONEBOOK" << RESET << std::endl;

	while (1) {

		std::cout << GREEN << "> ";
		std::getline(std::cin, cmd);
		std::cout << RESET;

		if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0
			|| cmd.compare("E") == 0) {
			std::cout << "Exiting . . ." << std::endl;
			return EXIT_SUCCESS;
		}

		else if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0
			|| cmd.compare("A") == 0)
			book.addContact();

		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0
			|| cmd.compare("S") == 0)
			book.searchContact();

		else
			fail("Invalid command");
	}

	return EXIT_SUCCESS;
}
