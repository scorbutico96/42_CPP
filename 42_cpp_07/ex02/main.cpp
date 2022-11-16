/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:52:19 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/16 17:52:20 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstdlib>
#include <iostream>

int
main(void) {

	Array<int>	a(2);

	a[0] = 42;
	a[1] = 21;

	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a.size() << std::endl;

	Array<int>	b(a);
	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << b.size() << std::endl;

	return EXIT_SUCCESS ;
}
