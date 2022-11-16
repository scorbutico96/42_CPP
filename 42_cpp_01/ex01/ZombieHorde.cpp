/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:04:51 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:04:52 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <sstream>

Zombie*
zombieHorde(int N, std::string name) {

	Zombie* horde = new Zombie[N];

	std::string			str;
	std::stringstream	itoa;

	for (int i = 0; i < N; i++) {

		itoa << i + 1;
		if (i + 1 <= 9)
			str = name + "_0" + itoa.str();
		else
			str = name + "_" + itoa.str();

		horde[i].setName(str);

		itoa.str("");
	}

	return horde ;
}
