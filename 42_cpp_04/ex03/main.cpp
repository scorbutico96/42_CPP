/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:07:40 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:17:42 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int
main(void) {

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");

	AMateria* tmp[2];
	tmp[0] = src->createMateria("ice");
	me->equip(tmp[0]);
	tmp[1] = src->createMateria("cure");
	me->equip(tmp[1]);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->use(2, *bob);

	bob->equip(tmp[0]);
	bob->use(0, *bob);
	bob->equip(tmp[1]);
	bob->use(0, *bob);

	delete bob;
	delete me;
	delete src;

	delete tmp[0];
	delete tmp[1];

	return 0 ;
}
