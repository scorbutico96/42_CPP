/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:03:10 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 16:03:11 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & src) : AMateria("Cure") { *this = src ; }

Cure::~Cure() {}

Cure &
Cure::operator=(Cure const & rhs) {
	if (this != &rhs) this->_type = rhs._type ;
	return *this ;
}

Cure *
Cure::clone() const { return new Cure ; }

void
Cure::use(ICharacter & target) { std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl ; }
