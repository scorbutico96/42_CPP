/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:43:45 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:43:46 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class AMateria;
#include "AMateria.hpp"

#include <string>

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const &	getName() const = 0;
	virtual void	equip(AMateria * m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter & target) = 0;
};

#endif
