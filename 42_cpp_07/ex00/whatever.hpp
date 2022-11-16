/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:55:39 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/16 16:55:40 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void
swap(T & x, T & y) {

	T z = x;
	x = y;
	y = z;
}

template<typename T>
T const &
min(T const & x, T const & y) {

	if (x == y) return y;
	return (x < y? x : y);
}

template<typename T>
T const &
max(T const & x, T const & y) {

	if (x == y) return y;
	return (x > y? x : y);
}

#endif
