/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:49:14 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 01:49:15 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) { return ; }

Fixed::Fixed(Fixed const & src) {

	*this = src;

	return ;
}

Fixed::Fixed(int const n) : _fixedPoint(n << this->bits) { return ; }

// Calculate x = floating_input * 2^(fractional_bits)
// Round x to the nearest whole number (e.g. roundf(x))
// Store the rounded x in an integer container
Fixed::Fixed(float const f) {

	this->_fixedPoint = (roundf(f * (1 << this->bits)));

	return ;
}

Fixed::~Fixed(void) { return ; }

Fixed&
Fixed::operator = (Fixed const & rhs) {

	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();

	return *this ;
}


/*
 * COMPARISON OPERATORS
*/

bool
Fixed::operator > (Fixed const & rhs) const { return (this->_fixedPoint > rhs.getRawBits()) ; }

bool
Fixed::operator < (Fixed const & rhs) const { return (this->_fixedPoint < rhs.getRawBits()) ; }

bool
Fixed::operator >= (Fixed const & rhs) const { return (this->_fixedPoint >= rhs.getRawBits()) ; }

bool
Fixed::operator <= (Fixed const & rhs) const { return (this->_fixedPoint <= rhs.getRawBits()) ; }

bool
Fixed::operator == (Fixed const & rhs) const { return (this->_fixedPoint == rhs.getRawBits()) ; }

bool
Fixed::operator != (Fixed const & rhs) const { return (this->_fixedPoint != rhs.getRawBits()) ; }

Fixed&
Fixed::min(Fixed & lhs, Fixed & rhs) {

	if (lhs <= rhs)
		return lhs ;
	else
		return rhs ;
}

Fixed&
Fixed::max(Fixed & lhs, Fixed & rhs) {

	if (lhs >= rhs)
		return lhs ;
	else
		return rhs ;
}

const Fixed&
Fixed::min(Fixed const & lhs, Fixed const & rhs) {

	if (lhs <= rhs)
		return lhs ;
	else
		return rhs ;
}

const Fixed&
Fixed::max(Fixed const & lhs, Fixed const & rhs) {

	if (lhs >= rhs)
		return lhs ;
	else
		return rhs ;
}

/*
 * ARITHMETIC OPERATORS
*/

Fixed
Fixed::operator + (Fixed const & rhs) const {

	int n = this->_fixedPoint + rhs.getRawBits();

	return Fixed(rawToFloat(n)) ;
}

Fixed
Fixed::operator - (Fixed const & rhs) const {

	int n = this->_fixedPoint - rhs.getRawBits();

	return Fixed(rawToFloat(n)) ;
}

Fixed
Fixed::operator * (Fixed const & rhs) const {

	int n = (this->_fixedPoint * rhs.getRawBits()) / (1 << this->bits);

	return Fixed(rawToFloat(n)) ;
}

Fixed
Fixed::operator / (Fixed const & rhs) const {

	int n = (this->_fixedPoint * (1 << this->bits)) / rhs.getRawBits() ;

	return Fixed(rawToFloat(n)) ;
}


/*
 * PRE.POST OPERATORS
*/

Fixed&
Fixed::operator ++ (void) {

	this->_fixedPoint++;

	return *this ;
}

Fixed&
Fixed::operator -- (void) {

	this->_fixedPoint--;

	return *this ;
}

Fixed
Fixed::operator ++ (int) {

	Fixed	tmp(this->toFloat());

	this->_fixedPoint++;

	return tmp ;
}

Fixed
Fixed::operator -- (int) {

	Fixed	tmp(this->toFloat());

	this->_fixedPoint--;

	return tmp ;
}


/*
 * UTILS
*/

int
Fixed::getRawBits(void) const {

	return this->_fixedPoint;
}

void
Fixed::setRawBits(int const raw) {
	
	this->_fixedPoint = raw;
}

float
Fixed::toFloat(void) const {

	return rawToFloat(this->_fixedPoint) ;
}

int
Fixed::toInt(void) const {

	return this->_fixedPoint >> this->bits ;
}

// Divide the input by (2^fractional_bits)
// Put the result into a float
float
Fixed::rawToFloat(int n) const {

	return ((float)n / (float)(1 << this->bits)) ;
}

std::ostream&
operator<<(std::ostream& o, Fixed const & i) {

	o << i.toFloat();

	return o ;
}
