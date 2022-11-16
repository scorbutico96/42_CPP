/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:33 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:34 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>

const std::string	str_levels[] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

enum e_filter {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNDEFINED
};

class Karen
{

typedef void (Karen::*FtPTR)(void);

public:

	Karen(std::string filter);

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	undefined(void);

	std::string	_errType[4];
	FtPTR		_FtArray[5];
	int			_filter;

	void	karenFilter(int i);
};

#endif
