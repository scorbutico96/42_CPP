/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:40:25 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/15 17:27:50 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base *
generate(void) {

	srand (time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return new A ;
		break;
	case 1:
		return new B ;
		break;
	case 2:
		return new C ;
		break;
	default:
		return NULL ;
		break;
	}
}

void
identify(Base * p){
	if (dynamic_cast<A *>(p))
		std::cout << "identifier * : A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "identifier * : B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "identifier * : C" << std::endl;
}

void
identify(Base & p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "identifier & : A" << std::endl;
	}
	catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "identifier & : B" << std::endl;
	}
	catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "identifier & : C" << std::endl;
	}
	catch(const std::exception& e) {}
	
}

int
main(void) {

	Base * tmp;

	tmp = generate();

	identify(tmp);

	identify(*tmp);

	delete tmp ;

	return 0 ;
}
