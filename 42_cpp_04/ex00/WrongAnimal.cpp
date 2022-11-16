/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:59:29 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 22:15:18 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {

	std::cout << "WrongAnimal Constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {

	std::cout << "WrongAnimal Copy Constructor" << std::endl;

	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal Destructor" << std::endl;
	return ;
}

WrongAnimal&
WrongAnimal::operator=(WrongAnimal const & rhs) {

	if (this != &rhs) this->_type = rhs.getType();
	return *this ;
}

std::string
WrongAnimal::getType() const {

	return this->_type ;
}

void
WrongAnimal::makeSound() const {

	std::cout << this->_type << " says WRONG" << std::endl;
}
