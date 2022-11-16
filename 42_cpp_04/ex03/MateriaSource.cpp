/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:02:09 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:19:41 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++) this->_library[i] = NULL;

	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) { *this = src ; }


MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++) {
		delete this->_library[i];
		this->_library[i] = NULL;
	}

	return ;
}

MateriaSource &
MateriaSource::operator=(MateriaSource const & rhs) {

	for (int i = 0; i < 4; i++) {
		this->_library[i] = NULL;
		if (rhs._library[i])
			this->_library[i] = rhs._library[i]->clone();
	}

	return *this ;
}

void
MateriaSource::learnMateria(AMateria * m) {

	for (int i = 0; i < 4; i++) {
		if (this->_library[i] == NULL) {
			this->_library[i] = m;
			return ;
		}
	}

	return ;
}

AMateria *
MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++) {
		if (this->_library[i] && this->_library[i]->getType() == type)
			return _library[i]->clone() ;
	}

	return NULL ;
}
