/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:25:58 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/16 16:26:04 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void
iter(T const * arr, unsigned int lenght, void (* funct)(T)) {
	for (unsigned int i = 0; i < lenght; i++) {
		(* funct)(arr[i]);
	}
}

template<typename T>
void
print(T const elem) {
	std::cout << elem;
}

#endif
