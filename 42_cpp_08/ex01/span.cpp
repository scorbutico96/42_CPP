/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:29:14 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/19 15:29:15 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <iterator>
#include <algorithm>
#include <exception>
#include <limits>

Span::Span() {}

Span::Span(unsigned int const & N) : _size(N) {}

Span::Span(Span const & src) { *this = src; }

Span::~Span() {}

Span &
Span::operator=(Span const & rhs) {

	this->_size = rhs._size;

	std::copy(rhs._vector.begin(), rhs._vector.end(), back_inserter(this->_vector));

	return *this ;
}

void
Span::addNumber(int const & n) {

	if (this->_vector.size() == _size) throw std::overflow_error("Vector is full");
	this->_vector.push_back(n);
}

void
Span::addNumber(sit start, sit end) {

	if (start > end) throw std::logic_error("Bad iterators");
	for (sit i = start; i < end; i++)
		this->addNumber(*i);
}

void
Span::validSpanException() const {

	if (this->_vector.size() < 2)
		throw std::length_error("Not enough numbers to operate");
}

int
Span::shortestSpan() {

	this->validSpanException();

	std::sort(this->_vector.begin(), this->_vector.end());

	int candidate = std::numeric_limits<int>::max();

	for (unsigned int i = 0; i < this->_size - 1; i++)
		if (this->_vector[i + 1] &&
			this->_vector[i + 1] - this->_vector[i] < candidate)
			candidate = this->_vector[i + 1] - this->_vector[i];
 
	return candidate;
}

int
Span::longestSpan() const {

	this->validSpanException();

	sit min = std::min_element(this->_vector.begin(), this->_vector.end());
	sit max = std::max_element(this->_vector.begin(), this->_vector.end());

	return *max - *min;
}

std::vector<int>
Span::getVector() { return this->_vector ; }
