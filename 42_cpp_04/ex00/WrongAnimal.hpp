/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:57:35 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 22:16:33 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>

class WrongAnimal
{
protected:
	std::string		_type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	virtual ~WrongAnimal();

	WrongAnimal&		operator=(WrongAnimal const & rhs);

	std::string		getType() const;
	void			makeSound() const;
};

#endif
