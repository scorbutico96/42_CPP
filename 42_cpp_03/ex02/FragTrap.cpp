/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:18:58 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/07 00:18:59 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {

	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;

	std::cout << "Constructor FragTrap " << this->_name << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {

	*this = src;

	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap " << this->_name << std::endl;
	return ;
}

FragTrap&
FragTrap::operator = (FragTrap const & rhs) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_HP = rhs._HP;
		this->_EP = rhs._EP;
		this->_AD = rhs._AD;
	}

	return *this ;
}

void
FragTrap::attack(std::string const & target) const {

	if (this->checkDeath()) return ;

	std::cout << "FragTrap " << this->_name
	<< RED << " attacks " << RESET
	<< target
	<< RED << " for " << this->_AD << " points of damage!" << RESET
	<< std::endl;

	return ;
}

void
FragTrap::highFiveGuys() const {

	if (this->checkDeath()) return ;

	std::cout << "FragTrap " << this->_name << " goes High Fives! Such wow!" << std::endl;
	return ;
}
