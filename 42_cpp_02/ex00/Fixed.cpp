/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:18:44 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:23:14 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) {

	std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&
Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();

	return *this ;
}

int
Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void
Fixed::setRawBits(int const raw) {
	
	this->_fixedPoint = raw;
}
