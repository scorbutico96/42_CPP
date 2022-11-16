/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:53 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 18:06:53 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << std::endl;
	ScavTrap	scav_01("SC4V-TP_01");
	ScavTrap	scav_02("SC4V-TP_02");

	scav_01.status();
	scav_02.status();

	std::cout << std::endl;
	std::cout << RED << "ULTRA VIOLENCE TEST" << RESET << std::endl;
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_02.beRepaired(10);
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_01.attack(scav_02.getName());
	scav_02.takeDamage(scav_01.getAD());

	std::cout << std::endl;
	std::cout << RED << "CONSISTENCY TEST" << RESET << std::endl;
	scav_02.attack(scav_01.getName());
	scav_02.takeDamage(scav_01.getAD());
	scav_02.beRepaired(100);
	scav_02.guardGate();

	std::cout << std::endl;
	scav_01.guardGate();

	std::cout << std::endl;
	return 0 ;
}
