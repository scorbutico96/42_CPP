/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:11:27 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:17:37 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

Character::Character() {}

Character::Character(std::string const & name) : _name(name), _clone(false) {

	for (int i = 0; i < 4; i++) this->_inventory[i] = NULL;

	return ;
}

Character::Character(Character const & src) { *this = src ; }

Character::~Character() {

	if (this->_clone == false) return ;

	for (int i = 0; i < 4; i++) delete this->_inventory[i] ;

}

Character &
Character::operator=(Character const & rhs) {

	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	}

	this->_name = rhs._name;

	this->_clone = true;

	return *this ;
}

std::string const &
Character::getName() const { return this->_name ; }


void
Character::equip(AMateria * m) {

	if (m == NULL) return ;

	if (m && m->getEquipped() == true) {
		std::cout << this->getName() << " EQUIP ERROR: Material is already equipped by another character!" << std::endl;
		return ;
	}

	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			m->setEquipped(true);
			return ;
		}

	return ;
}

void
Character::unequip(int idx) {

	if (idx < 0 || idx >= 4) return ;

	if (this->_clone == true) {
		std::cout << this->getName() << " UNEQUIP ERROR: Character Class clones can NOT unequip" << std::endl;
		return ;
	}

	if (this->_inventory[idx] == NULL) return ;

	this->_inventory[idx]->setEquipped(false);
	this->_inventory[idx] = NULL;
}

void
Character::use(int idx, ICharacter & target) { 

	if (idx < 0 || idx >= 4) return ;

	if (this->_inventory[idx] == NULL) {
		std::cout << this->getName() << "'s inventory[" << idx << "] is empty!" << std::endl;
		return ;
	}

	this->_inventory[idx]->use(target);
}
