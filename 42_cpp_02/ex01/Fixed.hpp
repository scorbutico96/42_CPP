/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:32:46 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/05 00:32:47 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & src); // copy constructor
	Fixed(int const n);
	Fixed(float const f);
	~Fixed();

	Fixed&		operator=(Fixed const & rhs); // assignment operator

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_fixedPoint;
	static const int	bits = 8;

};

std::ostream&	operator<<(std::ostream& o, Fixed const & i);

#endif
