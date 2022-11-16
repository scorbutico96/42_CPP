/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:47 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 16:15:48 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int
main(void) {

	ClapTrap	mucca("Mucca");
	ClapTrap	pollo("Pollo");

	mucca.status();
	pollo.status();

	mucca.attack(pollo.getName());
	pollo.takeDamage(mucca.getAD());
	pollo.beRepaired(5);
	pollo.attack(mucca.getName());
	mucca.takeDamage(pollo.getAD());

	return 0 ;
}
