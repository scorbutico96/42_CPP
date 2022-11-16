/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:20:02 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/02 15:20:04 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.Class.hpp"

PhoneBook::PhoneBook(void) {

	_index = 0;

	int contact = 0;
	while (contact < 8) {
		this->_init[contact] = 0;
		contact++;
	}
}

PhoneBook::~PhoneBook(void) {}

void
fail(std::string str) {

	std::cout << "Error: " << str << std::endl;

	return;
}

void
PhoneBook::overview(void) const {

	std::string str;

	int dataindex;
	int contact = 0;
	while (contact < 8 && this->_init[contact]) {
		std::cout << std::right;
		std::cout << std::setw(10) << contact + 1;

		dataindex = 0;
		while (dataindex < 3) {
			std::cout << "|";

			str = this->_slot[contact].getData(dataindex);
			if (str.length() > 9) {
				str = str.substr(0, 9);
				str += '.';
			}
			std::cout << std::setw(10) << str;

			dataindex++;
		}

		std::cout << std::endl;
		contact++;
	}

	return;
}

static bool
isValidSlot(std::string str) {

	if (str.length() == 0)
		return false;

	int i = 0;
	while (str[i]) {
		if (std::isdigit(str[i]) == false
			|| i > 1
			|| str[i] < '1'
			|| str[i] > '8') {return false;}
		i++;
	}

	return true;
}

static std::string
searchContactPrompt() {

	std::string input;

	bool valid = false;
	while (valid == false) {
		std::cout << "index " << GREEN << "> ";
		std::getline(std::cin, input);
		std::cout << RESET;

		valid = isValidSlot(input);
		if (valid == false) {
			fail("Invalid input");
			input.clear();
			return input;
		}
	}

	return input;
}

void
PhoneBook::searchContact(void) const {

	if (this->_init[0] == 0) {
		fail("No contacts found");
		return;
	}

	overview();

	std::string input = searchContactPrompt();

	if (input.size() == 0)
		return;

	int	contact = atoi(input.c_str()) - 1;

	if (this->_init[contact] == 0) {
		fail("Contact not found");
		return;
	}

	int i = 0;
	while (i < 5) {
		std::cout << std::left << std::setw(15) << g_data[i] << " : ";
		std::cout << this->_slot[contact].getData(i) << std::endl;
		i++;
	}

	return;
}

static bool
isValidData(std::string str) {

	if (str.length() == 0) {return false;}

	int i = 0;
	while (str[i]) {
		if (std::isprint(str[i]) == 0) {return false;}
		i++;
	}

	return true;
}

static std::string
addContactPrompt(unsigned int i) {

	std::string input;

	bool valid = false;
	while (valid == false) {
		std::cout << "Insert " << std::left << std::setw(15) << g_data[i];
		std::cout << GREEN << " > ";
		std::getline(std::cin, input);
		std::cout << RESET;

		valid = isValidData(input);
		if (valid == false) {
			fail("Invalid input");
		}
	}

	return input;
}

void
PhoneBook::addContact(void) {

	std::cout << BLU << BLINK << "MEMSLOT 0" << _index + 1 << "/08" << RESET << std::endl;

	int i = 0;
	while (i < 5) {
		this->_setContact(i, addContactPrompt(i));
		i++;
	}

	return;
}

void
PhoneBook::_setContact(int dataindex, std::string str) {

	this->_slot[this->_index].setData(dataindex, str);
	this->_init[this->_index] = 1;

	if (dataindex == 4) {
		if (this->_index < 7)
			_index++;
		else 
			this->_index = 0;
	}

	return;
}
