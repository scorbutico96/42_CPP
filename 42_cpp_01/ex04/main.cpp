/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:18 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:19 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

int
main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "Wrong number of arguments" << std::endl;
		return EXIT_FAILURE ;
	}

	std::ifstream ifs(argv[1]);
	if (ifs.good() == false) {
		std::cerr << "Invalid file" << std::endl;
		return EXIT_FAILURE ;
	}

	std::string output = argv[1];
	output += ".replace";
	std::ofstream ofs(output.c_str());
	if (ofs.good() == false) {
		std::cerr << "File creation error" << std::endl;
		return EXIT_FAILURE ;
	}

	std::stringstream buffer;
	buffer << ifs.rdbuf();
	std::string doc = buffer.str();

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::string::size_type pos = 0;
	while((pos = doc.find(s1, pos)) != std::string::npos) {

		doc.erase(pos, s1.length());
		doc.insert(pos, s2);
		pos += s2.length();
	}

	ofs << doc;

	return EXIT_SUCCESS ;
}
