/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:16:00 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 18:12:59 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap&	operator = (ScavTrap const & rhs);

	void	attack(std::string const & target) const;
	void	guardGate() const ;
};

#endif
