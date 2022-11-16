/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:05:26 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/04 20:05:27 by mcrisari         ###   ########.fr       */
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

class Karen
{

typedef void (Karen::*FtPTR)(void);

public:

	Karen();

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	std::string	_errType[4];
	FtPTR		_FtArray[4];
};

#endif
