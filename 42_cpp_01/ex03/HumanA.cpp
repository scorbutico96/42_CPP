/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:01 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:02 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : _name(name), _weapon(Weapon) {}

HumanA::~HumanA(void) {}

void
HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

	return ;
}
