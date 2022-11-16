/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:57:35 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 19:02:25 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{

protected:
	std::string		_type;

public:
	Animal();
	Animal(Animal const & src);
	virtual ~Animal();

	virtual Animal&		operator=(Animal const & rhs);

	std::string			getType() const;

	/* INTERFACES */
	virtual void		makeSound() const;
	virtual std::string	getIdea(unsigned int index) const = 0;
	virtual void		setIdea(unsigned int index, std::string idea) = 0;

};

#endif
