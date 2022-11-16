/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:45 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 16:15:46 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const & name) : _name(name), _HP(10), _EP(10), _AD(0) {

	std::cout << "Constructor Claptrap " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {

	*this = src;

	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destructor Claptrap " << this->_name << std::endl;
	return ;
}

ClapTrap&
ClapTrap::operator = (ClapTrap const & rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HP = rhs._HP;
		this->_EP = rhs._EP;
		this->_AD = rhs._AD;
	}

	return *this ;
}

void
ClapTrap::attack(std::string const & target) const {

	if (this->checkDeath()) return ;

	std::cout << "Claptrap " << this->_name
	<< RED << " attacks " << RESET
	<< target
	<< RED << " for " << this->_AD << " points of damage!" << RESET
	<< std::endl;

	return ;
}

void
ClapTrap::takeDamage(unsigned int amount) {

	if (this->checkDeath()) return ;

	if (amount >= this->_HP) this->_HP = 0;
	else this->_HP -= amount;

	if (this->checkDeath()) return ;

	std::cout << "Claptrap " << this->_name
	<< YELLOW
	<< " took " << amount << " points of damage! "
	<< RESET
	<< std::endl;

	this->status();

	return ;
}

void
ClapTrap::beRepaired(unsigned int amount) {

	if (this->checkDeath()) return ;

	this->_HP += amount;
	this->_EP -= 5;

	std::cout << "Claptrap " << this->_name
	<< GREEN
	<< " repaired " << amount << " points."
	<< RESET
	<< std::endl;

	this->status();

	return ;
}

const std::string
ClapTrap::getName() const {

	return this->_name;
}

unsigned int
ClapTrap::getAD() const {

	return this->_AD;
}

bool
ClapTrap::checkDeath() const {

	if (this->_HP) return false ;

	std::cout << "Claptrap " << this->_name << " is dead..." << std::endl;
	this->status();

	return true ;
}

void
ClapTrap::status() const {

	std::cout
	<< "Claptrap "
	<< this->_name
	<< BLU
	<< " status: "
	<< "[ " << this->_HP << " HP ]"
	<< " - "
	<< "[ " << this->_EP << " EP ]"
	<< " - "
	<< "[ " << this->_AD << " AD ]"
	<< RESET
	<< std::endl;

	return ;
}
