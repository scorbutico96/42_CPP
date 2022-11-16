/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:32:30 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/19 22:37:53 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	~MutantStack() {}
	// Copy Constructor			inherited from STACK
	// Assignment Operator=		inherited from STACK

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;

	iterator begin() { return this->c.begin() ; }
	iterator end() { return this->c.end() ; }
	const_iterator begin() const { return this->c.begin() ; }
	const_iterator end() const { return this->c.end() ; }
};

#endif

// typedef typename
// Dependent and non-dependent names:
// http://pages.cs.wisc.edu/~driscoll/typename.html
// https://stackoverflow.com/questions/1600936/officially-what-is-typename-for

// this->c
// accessing the underlying container STACK/DEQUE
// https://en.cppreference.com/w/cpp/container/stack
// https://en.cppreference.com/w/cpp/container/queue
