/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:53:10 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 19:53:11 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : _brain(NULL) {

	this->_type = "Dog";
	this->_brain = new Brain();
	this->_init();

	std::cout << "Dog Constructor" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : _brain(NULL) {

	*this = src;

	std::cout << "Dog Copy Constructor" << std::endl;
	return ;
}

Dog::~Dog() {

	delete this->_brain;

	std::cout << "Dog Destructor" << std::endl;
	return ;
}

Dog &
Dog::operator=(Dog const & rhs) {

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
Dog::makeSound() const {

	std::cout << this->_type << " WOOF" << std::endl;
	return ;
}

std::string
Dog::getIdea(unsigned int index) const {

	return this->_brain->getIdea(index);
}

void
Dog::setIdea(unsigned int index, std::string idea) {

	this->_brain->setIdea(index, idea);
}

void
Dog::_init() {

	this->setIdea(0, "RUN");
	this->setIdea(1, "BARK");
	this->setIdea(2, "EAT");
}
