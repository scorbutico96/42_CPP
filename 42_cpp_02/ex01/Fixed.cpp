/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:32:42 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/05 00:32:43 by mcrisari         ###   ########.fr       */
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

Fixed::Fixed(int const n) : _fixedPoint(n << this->bits) {

	std::cout << "Int Constructor called" << std::endl;

	return ;
}

// Calculate x = floating_input * 2^(fractional_bits)
// Round x to the nearest whole number (e.g. roundf(x))
// Store the rounded x in an integer container
Fixed::Fixed(float const f) {

	std::cout << "Float Constructor called" << std::endl;

	this->_fixedPoint = (roundf(f * (1 << this->bits)));

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

float
Fixed::toFloat(void) const {

	return ((float)this->_fixedPoint / (float)(1 << this->bits)) ;
}

int
Fixed::toInt(void) const {

	return this->_fixedPoint >> this->bits ;
}

std::ostream&
operator<<(std::ostream& o, Fixed const & i) {

	o << i.toFloat();

	return o ;
}
