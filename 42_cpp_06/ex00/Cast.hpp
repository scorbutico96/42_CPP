/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:21:02 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/15 16:21:03 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

enum type_table {
	UNDEF,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

#include <string>

class Cast
{

private:

	unsigned int	_type;

	char	_char;
	int		_int;
	float	_float;
	double	_double;

	void	analyse(std::string const & str);
	void	cast(std::string const & str);
	bool	impossible();

public:

	Cast();
	Cast(Cast const & src);
	~Cast();

	Cast &	operator=(Cast const & rhs);

	void	convert(std::string const & str);

	void	printChar();
	void	printInt();
	void	printFloat();
	void	printDouble();

class BadInput : public std::exception {
public:
	const char * what() const throw() { return "Bad Input" ; }
};

};

#endif
