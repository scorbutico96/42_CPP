/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:37:47 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:03:52 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class Character;
class ICharacter;
#include "ICharacter.hpp"

#include <string>

class AMateria
{

protected:
	std::string		_type;
	bool			_equipped;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const;

	virtual AMateria *	clone() const = 0;
	virtual void		use(ICharacter & target);

	virtual bool		getEquipped() const;
	virtual void		setEquipped(bool b);

};

#endif
