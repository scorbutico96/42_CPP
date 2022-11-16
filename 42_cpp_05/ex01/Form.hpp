/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:19:43 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/12 16:19:44 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

#include <string>

class Form
{

private:
	Form();
	std::string		_name;
	bool			_signed;
	int				_signGrade;
	int				_execGrade;

public:

	class GradeTooHighException : public std::exception {
	public:
		const char * what() const throw() { return "Form's grade is too high" ; }
	};

	class GradeTooLowException : public std::exception {
	public:
		const char * what() const throw() { return "Form's grade is too low" ; }
	};

	Form(std::string const & name, const int signGrade, const int execGrade);
	Form(Form const & src);
	~Form();

	Form &	operator=(Form const & rhs);

	std::string		getName() const;
	bool			getSigned() const;
	int				getSignGrade() const;
	int				getExecGrade() const;

	void			beSigned(Bureaucrat & bureaucrat);

};

std::ostream&	operator<<(std::ostream& o, Form const & i);

#endif
