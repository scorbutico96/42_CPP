/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:04:57 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:04:58 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int
main ( void ) {

	std::string		string = "HI THIS IS BRAIN";

	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string address" << "\t: " << &string << std::endl;
	std::cout << "PTR address" << "\t: " << &stringPTR << std::endl;
	std::cout << "REF address" << "\t: " << &stringREF << std::endl;

	std::cout << "string value" << "\t: " << string << std::endl;
	std::cout << "PTR value" << "\t: " << *stringPTR << std::endl;
	std::cout << "REF value" << "\t: " << stringREF << std::endl;

	return 0 ;
}
