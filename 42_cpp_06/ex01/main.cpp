/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:20:59 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/15 16:37:47 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include <stdint.h>
#include <iostream>

uintptr_t
serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr) ;
}

Data *
deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw) ;
}

int
main(void) {

	Data		data;
	uintptr_t	int_tmp;
	Data *		data_tmp;

	data._int = 42;
	data._str = "fortytwo";

	std::cout << "original:\t" << &data <<std::endl;

	int_tmp = serialize(&data);
	std::cout << std::hex;
	std::cout << "serial:\t\t" << "0x" << int_tmp <<std::endl;
	std::cout << std::dec;

	data_tmp = deserialize(int_tmp);
	std::cout << "deserial:\t" << data_tmp <<std::endl;
	std::cout << data_tmp->_int <<std::endl;
	std::cout << data_tmp->_str <<std::endl;

	return 0 ;
}
