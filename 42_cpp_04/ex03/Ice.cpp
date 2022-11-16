/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:44:24 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 15:44:25 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) : AMateria("ice") { *this = src ; }

Ice::~Ice() {}

Ice &
Ice::operator=(Ice const & rhs) {
	if (this != &rhs) this->_type = rhs._type ;
	return *this ;
}

Ice *
Ice::clone() const { return new Ice ; }

void
Ice::use(ICharacter & target) { std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl ; }
