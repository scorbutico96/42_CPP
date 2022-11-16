/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:04:47 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:04:48 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int
main ( void ) {

	unsigned int force = 42;

	Zombie* horde = zombieHorde(force, "brainless");

	for (unsigned int i = 0; i < force; i++)
		horde[i].announce();

	delete [] horde;

	return 0 ;
}
