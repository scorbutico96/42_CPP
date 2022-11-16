/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:27:36 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 18:27:37 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
: Form("Robotomy Request", target, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void
RobotomyRequestForm::doExecute() const {

	std::srand(std::time(NULL));
	int random = std::rand();
	if (random % 2) {
		std::cout
		<< "LOUD DRILL NOISES"
		<< std::endl
		<< this->getTarget()
		<< " has been robotomized successfully!"
		<< std::endl;
		return ;
	}
	std::cout << "Robotomy was a failure, such is rand()..." << std::endl;
}
