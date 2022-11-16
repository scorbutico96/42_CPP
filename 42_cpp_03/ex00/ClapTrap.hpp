/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:49 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 16:15:50 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#define BLU "\033[34m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

#include <iostream>

class ClapTrap
{

public:
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap&	operator = (ClapTrap const & rhs);

	void	attack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	const std::string	getName() const;
	unsigned int		getAD() const ;
	void				status() const;

protected:
	std::string		_name;
	unsigned int	_HP;
	unsigned int	_EP;
	unsigned int	_AD;

	bool	checkDeath() const;

};

#endif
