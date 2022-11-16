/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:49:20 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/06 01:49:21 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const n);
	Fixed(float const f);
	~Fixed();

	Fixed&		operator = (Fixed const & rhs);

	// COMPARISON OPERATORS
	bool	operator > (Fixed const & rhs) const ;
	bool	operator < (Fixed const & rhs) const ;
	bool	operator >= (Fixed const & rhs) const ;
	bool	operator <= (Fixed const & rhs) const ;
	bool	operator == (Fixed const & rhs) const ;
	bool	operator != (Fixed const & rhs) const ;
	static Fixed&		min(Fixed & lhs, Fixed & rhs);
	static Fixed&		max(Fixed & lhs, Fixed & rhs);
	static const Fixed&	min(Fixed const & lhs, Fixed const & rhs);
	static const Fixed&	max(Fixed const & lhs, Fixed const & rhs);

	// ARITHMETIC OPERATORS
	Fixed	operator + (Fixed const & rhs) const;
	Fixed	operator - (Fixed const & rhs) const;
	Fixed	operator * (Fixed const & rhs) const;
	Fixed	operator / (Fixed const & rhs) const;

	// PRE.POST OPERATORS
	Fixed&	operator ++ (void); // PREFIX
	Fixed&	operator -- (void); // PREFIX
	Fixed	operator ++ (int); // POSTFIX
	Fixed	operator -- (int); // POSTFIX

	// UTILS
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	float	rawToFloat(int n) const;

private:

	int					_fixedPoint;
	static const int	bits = 8;

};

std::ostream&	operator<<(std::ostream& o, Fixed const & i);

#endif
