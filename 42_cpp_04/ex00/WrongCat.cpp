/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:12:06 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 22:12:07 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {

	this->_type = "WrongCat";

	std::cout << "WrongCat Constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) {

	std::cout << "WrongCat Copy Constructor" << std::endl;

	*this = src;
	return ;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor" << std::endl;
	return ;
}

void
WrongCat::makeSound() const {

	std::cout << this->_type << " MEOW" << std::endl;
	return ;
}
