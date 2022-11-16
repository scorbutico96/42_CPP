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

Dog::Dog() {

	this->_type = "Dog";

	std::cout << "Dog Constructor" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) {

	std::cout << "Dog Copy Constructor" << std::endl;

	*this = src;
	return ;
}

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
	return ;
}

void
Dog::makeSound() const {

	std::cout << this->_type << " WOOF" << std::endl;
	return ;
}
