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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int
main(void) {

	// ClapTrap	mucca("Mucca");
	// ClapTrap	pollo("Pollo");

	// mucca.status();
	// pollo.status();

	// mucca.attack(pollo.getName());
	// pollo.takeDamage(mucca.getAD());
	// pollo.beRepaired(5);
	// pollo.attack(mucca.getName());
	// mucca.takeDamage(pollo.getAD());

	// std::cout << std::endl;
	// ScavTrap	scav_01("SC4V-TP_01");
	// ScavTrap	scav_02("SC4V-TP_02");

	// scav_01.status();
	// scav_02.status();

	// std::cout << std::endl;
	// std::cout << RED << "ULTRA VIOLENCE TEST" << RESET << std::endl;
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_02.beRepaired(10);
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_01.attack(scav_02.getName());
	// scav_02.takeDamage(scav_01.getAD());

	// std::cout << std::endl;
	// std::cout << RED << "CONSISTENCY TEST" << RESET << std::endl;
	// scav_02.attack(scav_01.getName());
	// scav_02.takeDamage(scav_01.getAD());
	// scav_02.beRepaired(100);
	// scav_02.guardGate();

	// std::cout << std::endl;
	// scav_01.guardGate();

	// std::cout << std::endl;
	// FragTrap	mario("Mario");
	// FragTrap	luigi("Luigi");

	// std::cout << std::endl;
	// std::cout << RED << "ULTRA VIOLENCE TEST" << RESET << std::endl;
	// mario.attack(luigi.getName());
	// luigi.takeDamage(mario.getAD());
	// mario.attack(luigi.getName());
	// luigi.takeDamage(mario.getAD());
	// mario.attack(luigi.getName());
	// luigi.takeDamage(mario.getAD());
	// luigi.beRepaired(10);
	// mario.attack(luigi.getName());
	// luigi.takeDamage(mario.getAD());
	// mario.attack(luigi.getName());
	// luigi.takeDamage(mario.getAD());

	// std::cout << std::endl;
	// std::cout << RED << "CONSISTENCY TEST" << RESET << std::endl;
	// luigi.attack(mario.getName());
	// luigi.takeDamage(mario.getAD());
	// luigi.beRepaired(100);
	// luigi.highFiveGuys();

	// std::cout << std::endl;
	// mario.highFiveGuys();

	std::cout << std::endl;
	DiamondTrap		sapphire("Sapphire");
	DiamondTrap		emerald("Emerald");

	std::cout << std::endl;
	std::cout << RED << "ULTRA VIOLENCE TEST" << RESET << std::endl;
	sapphire.attack(emerald.getName());
	emerald.takeDamage(sapphire.getAD());
	sapphire.attack(emerald.getName());
	emerald.takeDamage(sapphire.getAD());
	sapphire.attack(emerald.getName());
	emerald.takeDamage(sapphire.getAD());
	emerald.beRepaired(10);
	sapphire.attack(emerald.getName());
	emerald.takeDamage(sapphire.getAD());
	sapphire.attack(emerald.getName());
	emerald.takeDamage(sapphire.getAD());

	std::cout << std::endl;
	std::cout << RED << "CONSISTENCY TEST" << RESET << std::endl;
	emerald.attack(sapphire.getName());
	emerald.takeDamage(sapphire.getAD());
	emerald.beRepaired(100);
	emerald.highFiveGuys();

	std::cout << std::endl;
	sapphire.highFiveGuys();
	sapphire.guardGate();
	sapphire.whoAmI();

	std::cout << std::endl;
	return 0 ;
}
