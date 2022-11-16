/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:33:39 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/07 00:33:40 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const & name)
: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {

	this->_HP = FragTrap::_HP;
	this->_EP = ScavTrap::_EP;
	this->_AD = FragTrap::_AD;

	std::cout << "Constructor DiamondTrap " << this->_name << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
 : ClapTrap(src), ScavTrap(src), FragTrap(src) {

	*this = src;

	return ;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "Destructor DiamondTrap " << this->_name << std::endl;
	return ;
}

DiamondTrap&
DiamondTrap::operator = (DiamondTrap const & rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HP = rhs._HP;
		this->_EP = rhs._EP;
		this->_AD = rhs._AD;
	}

	return *this ;
}

void
DiamondTrap::attack(std::string const & target) const {

	ScavTrap::attack(target);

	return ;
}

void
DiamondTrap::whoAmI () const {

	std::cout << "Hello! I am " << this->_name << "!" << std::endl;
	std::cout << "My clapTrap name is " << ClapTrap::_name << "!" << std::endl;

	return ;
}
