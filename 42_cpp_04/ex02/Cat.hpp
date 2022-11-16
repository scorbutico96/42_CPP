/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:52:57 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 19:52:58 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

private:
	Brain *		_brain;
	void		_init();

public:
	Cat();
	Cat(Cat const & src);
	~Cat();

	Cat &	operator=(Cat const & rhs);

	void			makeSound() const;
	std::string		getIdea(unsigned int index) const;
	void			setIdea(unsigned int index, std::string idea);

};

#endif
