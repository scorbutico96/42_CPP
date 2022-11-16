/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:37:45 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/10 22:16:50 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class AMateria;
#include "ICharacter.hpp"

#include <string>

class Character : public ICharacter
{
private:
	Character();

protected:
	AMateria *		_inventory[4];
	std::string		_name;
	bool			_clone;

public:
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	Character &		operator=(Character const & rhs);

	virtual std::string const &	getName() const;
	void	equip(AMateria * m);
	void	unequip(int idx);
	void	use(int idx, ICharacter & target);

};

#endif
