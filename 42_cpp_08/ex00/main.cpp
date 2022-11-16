/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 13:00:05 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/19 13:00:06 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <cstdlib>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

int
main(void) {

	std::vector<int> vctr;

	vctr.push_back(10);
	vctr.push_back(23);
	vctr.push_back(3);
	vctr.push_back(17);
	vctr.push_back(42);

	try { easyfind(vctr, 42); }
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	try { easyfind(vctr, 20); }
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }


	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(42);

	try { easyfind(lst, 42); }
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	try { easyfind(lst, 20); }
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }


	std::deque<int> dq;

	dq.push_back(10);
	dq.push_back(23);
	dq.push_back(3);
	dq.push_back(17);
	dq.push_back(42);

	try { easyfind(dq, 42); }
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }
	try { easyfind(dq, 20); }
	catch(const std::exception & e) { std::cout << e.what() << std::endl; }

	return EXIT_SUCCESS ;
}
