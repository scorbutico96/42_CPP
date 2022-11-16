/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragrap.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:18:53 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/07 00:18:54 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap&	operator = (FragTrap const & rhs);

	void	attack(std::string const & target) const;
	void	highFiveGuys(void) const ;
};

#endif
