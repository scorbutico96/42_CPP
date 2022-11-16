/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:25:55 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/16 16:26:54 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>
#include <string>
#include <cstdlib>

int
main(void) {

	std::string str[3] = {"hello", "ciao", "salut"};
	iter(str, 3, print);
	std::cout << std::endl;

	int numbers[3] = {0, 1, 2};
	iter(numbers, 3, print);
	std::cout << std::endl;

	return EXIT_SUCCESS ;
}
