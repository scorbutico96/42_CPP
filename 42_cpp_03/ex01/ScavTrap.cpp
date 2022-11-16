/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:56 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 18:08:39 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {

	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;

	std::cout << "Constructor Scavtrap " << this->_name << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {

	*this = src;

	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scavtrap " << this->_name << std::endl;
	return ;
}

ScavTrap&
ScavTrap::operator = (ScavTrap const & rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HP = rhs._HP;
		this->_EP = rhs._EP;
		this->_AD = rhs._AD;
	}

	return *this ;
}

void
ScavTrap::attack(std::string const & target) const {

	if (this->checkDeath()) return ;

	std::cout << "Scavtrap " << this->_name
	<< RED << " attacks " << RESET
	<< target
	<< RED << " for " << this->_AD << " points of damage!" << RESET
	<< std::endl;

	return ;
}

void
ScavTrap::guardGate() const {

	if (this->checkDeath()) return ;

	std::cout << "Scavtrap " << this->_name << " entered in Gate Keeper mode!" << std::endl;
	return ;
}
