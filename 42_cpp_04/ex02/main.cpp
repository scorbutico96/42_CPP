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

int
main(void) {

	Animal *	shelter[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2) shelter[i] = new Dog;
		else shelter[i] =  new Cat;
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) delete shelter[i];

	Cat	a;
	Cat	b;

	std::cout << std::endl;

	std::cout << a.getIdea(2) << std::endl;
	std::cout << b.getIdea(2) << std::endl;

	a.setIdea(2, "CUDDLE");
	std::cout << a.getIdea(2) << std::endl;
	std::cout << b.getIdea(2) << std::endl;
	b = a;
	std::cout << b.getIdea(2) << std::endl;

	std::cout << std::endl;

	Cat c(b);
	std::cout << c.getIdea(2) << std::endl;

	// Animal	test;

	std::cout << std::endl;
	return 0 ;
}
