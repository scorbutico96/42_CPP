/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:59:29 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 19:01:59 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal") {

	std::cout << "Animal Constructor" << std::endl;
	return ;
}

Animal::Animal(Animal const & src) {

	std::cout << "Animal Copy Constructor" << std::endl;

	*this = src;
	return ;
}

Animal::~Animal() {

	std::cout << "Animal Destructor" << std::endl;
	return ;
}

Animal&
Animal::operator=(Animal const & rhs) {

	if (this != &rhs) this->_type = rhs.getType();
	return *this ;
}

std::string
Animal::getType() const {

	return this->_type ;
}

void
Animal::makeSound() const {

	std::cout << this->_type << " doesn't know which sound to make!" << std::endl;
}
