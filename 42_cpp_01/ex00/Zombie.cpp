/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:04:40 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:04:41 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( std::string name ) : _name(name) {

	return ;
}

Zombie::~Zombie ( void ) {

	std::cout << "DEBUG: Zombie " << this->_name << " destructed" << std::endl;
	return ;
}

void
Zombie::announce ( void ) const {

	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
