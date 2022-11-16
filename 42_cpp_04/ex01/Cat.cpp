/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:53:04 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 19:53:05 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : _brain(NULL) {

	this->_type = "Cat";
	this->_brain = new Brain();
	this->_init();

	std::cout << "Cat Constructor" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : _brain(NULL) {

	*this = src;

	std::cout << "Cat Copy Constructor" << std::endl;
	return ;
}

Cat::~Cat() {

	delete this->_brain;

	std::cout << "Cat Destructor" << std::endl;
	return ;
}

Cat &
Cat::operator=(Cat const & rhs) {

	if (this != &rhs) {
		delete this->_brain;
		this->_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
		this->_type = rhs._type;
	}

	return *this ;
}

void
Cat::makeSound() const {

	std::cout << this->_type << " WOOF" << std::endl;
	return ;
}

std::string
Cat::getIdea(unsigned int index) const {

	return this->_brain->getIdea(index);
}

void
Cat::setIdea(unsigned int index, std::string idea) {

	this->_brain->setIdea(index, idea);
}

void
Cat::_init() {

	this->setIdea(0, "SLEEP");
	this->setIdea(1, "EXPLORE");
	this->setIdea(2, "KILL");
}
