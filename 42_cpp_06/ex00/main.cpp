/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:00:16 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/13 17:00:17 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

#include <string>

int
main(int argc, char **argv) {

	Cast	Scalar;

	try {

		if (argc != 2) throw Cast::BadInput();

		std::string str = static_cast<std::string>(argv[1]);

		Scalar.convert(str);

		Scalar.printChar();
		Scalar.printInt();
		Scalar.printFloat();
		Scalar.printDouble();
	}
	catch (std::exception const & e) { std::cout << e.what() << std::endl; }

	return 0 ;
}
