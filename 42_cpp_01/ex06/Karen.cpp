/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:29 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:30 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(std::string filter) {

	for (int i = 0; i < 4; i++) 
		this->_errType[i] = str_levels[i];

	this->_FtArray[0] = &Karen::debug;
	this->_FtArray[1] = &Karen::info;
	this->_FtArray[2] = &Karen::warning;
	this->_FtArray[3] = &Karen::error;
	this->_FtArray[4] = &Karen::undefined;

	int i = 0;
	for (i = 0; i < 4; i++) {
		if (filter == _errType[i]) {
			// this->_filter = i;
			break ;
		}
	}

	this->karenFilter(i);

	return ;
}

// NONSENSE
void
Karen::karenFilter(int i) {

	switch (i)
	{
	case 0:
		this->_filter = DEBUG;
		break;
	case 1:
		this->_filter = INFO;
		break;
	case 2:
		this->_filter = WARNING;
		break;
	case 3:
		this->_filter = ERROR;
		break;
	
	default:
		this->_filter = UNDEFINED;
		break;
	}
}


void
Karen::complain(std::string level) {

	int i;

	for (i = 0; i < 4; i++) {
		if (level == _errType[i])
			break ;
	}

	if (i < 4 && i >= this->_filter)
		(this->*_FtArray[i])();
	else if (this->_filter == UNDEFINED)
		(this->*_FtArray[UNDEFINED])();

	return ;
}

void
Karen::debug(void) {

	std::cout << "[ DEBUG ]" << std::endl
	<< "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
	<< "I just love it!" << std::endl;
	return ;
}

void
Karen::info(void) {

	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extrabacon cost more money."  << std::endl
	<< "You don’t put enough! If you did I would not have to askfor it!"  << std::endl;
	return ;
}

void
Karen::warning(void) {

	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free." << std::endl
	<< "I’ve beencoming here for years and you just started working here last month." << std::endl;
	return ;
}

void
Karen::error(void) {

	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
	return ;
}

void
Karen::undefined(void) {

	std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
	return ;
}
