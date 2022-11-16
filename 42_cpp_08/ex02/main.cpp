/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:32:33 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/19 22:33:13 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

#include <cstdlib>
#include <iostream>
#include <list>

int
main(void) {

	std::cout << "*** MUTANT ***" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(5);
	mstack.push(3);
	mstack.push(737);
	// [...]
	mstack.push(0);

	std::cout << "size: "  << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	std::cout << "size: " << s.size() << std::endl;

	std::cout << std::endl;

	std::cout << "*** LIST ***" << std::endl;
	std::list<int>	lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << "top: " << *(--lst.end()) << std::endl;

	lst.pop_back();

	std::cout << "size: " << lst.size() << std::endl;

	lst.push_back(5);
	lst.push_back(3);
	lst.push_back(737);
	// [...]
	lst.push_back(0);

	std::cout << "size: "  << lst.size() << std::endl;

	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();

	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::list<int> lst2(lst);
	std::cout << "size: " << lst2.size() << std::endl;


	return EXIT_SUCCESS ;
}
