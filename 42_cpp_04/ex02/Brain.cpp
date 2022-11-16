/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:26:40 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 22:26:41 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {

	this->_init();

	std::cout << "Brain Constructor" << std::endl;
	return ;
}

Brain::Brain(Brain const & src) {

	this->_init();
	*this = src;

	std::cout << "Brain Copy Constructor" << std::endl;
	return ;
}

Brain::~Brain() {

	std::cout << "Brain Destructor" << std::endl;
	return ;
}

Brain&
Brain::operator=(Brain const & rhs) {

	if (this != &rhs)
		for (int i = 0; i < 100; i++) this->_ideas[i] = rhs._ideas[i];

	return *this ;
}

void
Brain::_init() {

	for (int i = 0; i < 100; i++) this->_ideas[i] = "Empty idea";
}

std::string
Brain::getIdea(unsigned int index) const {

	return this->_ideas[index] ;
}

void
Brain::setIdea(unsigned int index, std::string idea) {

	if (index < 100) this->_ideas[index] = idea;

	return ;
}
