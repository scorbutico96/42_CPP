/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:22:48 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 23:22:49 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

private:

public:

	class FormNotFound : public std::exception {
	public:
		const char * what() const throw() { return "Form's name not found" ; }
	};

	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern &	operator=(Intern const & rhs);

	Form *	makeForm(std::string const name, std::string const target);

};

#endif
