/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:19:59 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/02 15:20:00 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string
Contact::getData(int dataindex) const {

	return this->_data_arr[dataindex];
}

void
Contact::setData(int dataindex, std::string str) {

	this->_data_arr[dataindex] = str;

	return;
}
