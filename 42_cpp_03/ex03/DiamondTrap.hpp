/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:33:31 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/07 00:34:12 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
private:
	std::string		_name;

public:
	DiamondTrap(std::string const & name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();

	DiamondTrap&	operator = (DiamondTrap const & rhs);

	void	attack(std::string const & target) const;
	void	whoAmI() const;
};

#endif
