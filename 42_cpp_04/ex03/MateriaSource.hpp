/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:37:39 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 03:38:36 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria *	_library[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	MateriaSource &		operator=(MateriaSource const & rhs);

	void		learnMateria(AMateria * m);
	AMateria *	createMateria(std::string const & type);

};

#endif
