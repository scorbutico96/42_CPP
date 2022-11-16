/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:43:55 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:04:25 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>

AMateria::AMateria(std::string const & type) : _type(type), _equipped(false) {}

AMateria::~AMateria() {}

std::string const &
AMateria::getType() const { return this->_type; }

void
AMateria::use(ICharacter & target) {
	(void)target;
	std::cout << "Error: Abstract base class AMateria type" << std::endl;
}

bool
AMateria::getEquipped() const { return this->_equipped ; }

void
AMateria::setEquipped(bool b) { this->_equipped = b ; }
