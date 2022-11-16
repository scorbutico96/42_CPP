/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:56:04 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 22:17:37 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int
main(void) {

	const Animal *		meta = new Animal();
	const Animal *		j = new Dog();
	const Animal *		i = new Cat();

	std::cout << j->getType() << "" << std::endl;
	std::cout << i->getType() << "" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta ;
	delete j ;
	delete i ;

	const WrongAnimal *		wrong = new WrongCat();

	wrong->makeSound();

	delete wrong ;

	return 0 ;
}
