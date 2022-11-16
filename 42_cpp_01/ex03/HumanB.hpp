/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:12 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:13 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);

	void	attack(void) const;
	void	setWeapon(Weapon& weapon);

private:
	std::string	_name;
	Weapon*		_weapon;
};

#endif
