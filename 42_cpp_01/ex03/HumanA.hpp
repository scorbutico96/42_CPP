/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:09 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:10 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA(void);

	void	attack(void) const;

private:
	std::string	_name;
	Weapon&		_weapon;
};

#endif
