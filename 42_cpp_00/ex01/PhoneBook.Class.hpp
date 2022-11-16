/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:20:07 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/02 15:20:07 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>

#include "Contact.Class.hpp"

#define BLU "\033[34m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLINK "\033[5m"
#define RESET "\033[0m"
#define CLEAR "\033[2J\033[H"

const std::string	g_data[] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

void	fail(std::string str);

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	void	addContact(void);
	void	overview(void) const;
	void	searchContact(void) const;

private:
	Contact	_slot[8];
	int		_init[8];
	int		_index;

	void	_setContact(int dataindex, std::string str);

};

#endif
