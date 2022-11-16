/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:26:42 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/09 22:26:43 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
private:
	void	_init();

protected:
	std::string		_ideas[100];

public:
	Brain();
	Brain(Brain const & src);
	~Brain();

	Brain&	operator=(Brain const & rhs);

	std::string		getIdea(unsigned int index) const ;
	void			setIdea(unsigned int index, std::string idea);
};

#endif
