/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:21:30 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/15 16:21:31 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast() : _type(UNDEF) {}

Cast::Cast(Cast const & src) { *this = src ; }

Cast::~Cast() {}

Cast &
Cast::operator=(Cast const & rhs) {
	this->_type = rhs._type;
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;

	return *this ;
}

void
Cast::convert(std::string const & str) {

	if (str.length() == false) throw Cast::BadInput();

	this->analyse(str);

	this->cast(str);

	return ;
}

void
Cast::analyse(std::string const & str) {

	if (str.length() == 1 && isprint(str[0]) && (str[0] < '0' || str[0] > '9')) {
		this->_type = CHAR;
		return ;
	}

	for (unsigned int i = 0; i < str.length(); i++) {
		if (i && isdigit(str[i]) == false) break ;
		if (i == str.length() - 1) {
			this->_type = INT;
			return ;
		}
	}

	char * end;
	double d = std::strtod(str.c_str(), &end);
	if (end == str.c_str() + str.size() - 1 && *end == 'f') this->_type = FLOAT;
	else this->_type = DOUBLE;
	(void)d;

	return ;
}

void
Cast::cast(std::string const & str) {

	char *	end;
	double	candidate = std::strtod(str.c_str(), &end);

	switch (this->_type)
	{
	case CHAR:
		this->_char = str[0];
		this->_int = static_cast<int>(this->_char);
		this->_float = static_cast<float>(this->_char);
		this->_double = static_cast<double>(this->_char);
		break;
	case INT:
		this->_int = atoi(str.c_str());
		this->_char = static_cast<char>(this->_int);
		this->_float = static_cast<float>(this->_int);
		this->_double = static_cast<double>(this->_int);
		break;
	case FLOAT:
		this->_double = candidate;
		this->_char = static_cast<char>(candidate);
		this->_int = static_cast<int>(candidate);
		this->_float = static_cast<double>(candidate);
		break;
	case DOUBLE:
		this->_double = candidate;
		this->_char = static_cast<char>(candidate);
		this->_int = static_cast<int>(candidate);
		this->_float = static_cast<double>(candidate);
		break;
	default:
		break;
	}
}

bool
Cast::impossible() {
	if (isnan(this->_double) == true
		|| isinf(this->_double) == true)
		return true;

	return false ;
}

void
Cast::printChar() {
	std::cout << "char:\t";
	if (impossible() == true) {
		std::cout << "Impossible" << std::endl;
		return ;
	}
	if (isprint(this->_char) == false) {
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << this->_char << std::endl;
}

void
Cast::printInt() {
	std::cout << "int:\t";
	if (impossible() == true) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << this->_int << std::endl;
}

void
Cast::printFloat() {
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float:\t" << this->_float << "f"<< std::endl;
}

void
Cast::printDouble() {
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "double:\t" << this->_double << std::endl;
}
