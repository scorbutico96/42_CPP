/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:26:58 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 18:26:59 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <sstream>
#include <stdlib.h>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
: Form("Shrubbery Creation", target, 25, 5) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void
ShrubberyCreationForm::doExecute() const {

	std::string output = this->getTarget();
	output += "_shrubbery";
	std::ofstream ofs(output.c_str());
	if (ofs.good() == false) {
		std::cerr << "File creation error" << std::endl;
		return ;
	}

	for (int i = 0; i < 3; i++) {
		ofs << "       ###" << std::endl;
		ofs << "      #o###" << std::endl;
		ofs << "    #####o###" << std::endl;
		ofs << "   #o#\\#|#/###" << std::endl;
		ofs << "    ###\\|/#o#" << std::endl;
		ofs << "     # }|{  #" << std::endl;
		ofs << "       }|{" << std::endl;
	}
	std::cout << this->getTarget()
	<< "_shrubbery has been created!"
	<< std::endl;
}
