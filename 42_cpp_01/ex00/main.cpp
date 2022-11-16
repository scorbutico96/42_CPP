/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:04:32 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:04:33 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name) ;

void	randomChump( std::string name) ;

int
main ( void ) {

	Zombie*	heap_zombie;

	heap_zombie = newZombie("heap");
	heap_zombie->announce();

	randomChump("stack");

	delete heap_zombie;

	return 0 ;
}
