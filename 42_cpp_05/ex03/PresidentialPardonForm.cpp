/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:28:00 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 18:28:01 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
: Form("Presidential Pardon", target, 145, 137) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void
PresidentialPardonForm::doExecute() const {

	std::cout << this->getTarget()
	<< " has been pardoned by Zaphod Beeblebrox"
	<< std::endl;
}
