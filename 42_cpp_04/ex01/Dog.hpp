/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:52:55 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 19:52:56 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

private:
	Brain *		_brain;
	void		_init();

public:
	Dog();
	Dog(Dog const & src);
	~Dog();

	Dog &	operator=(Dog const & rhs);

	void			makeSound() const;
	std::string		getIdea(unsigned int index) const;
	void			setIdea(unsigned int index, std::string idea);

};

#endif
