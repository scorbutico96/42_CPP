/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:29:06 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/19 15:29:07 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

typedef std::vector<int>::const_iterator sit;

class Span
{

private:
	Span();
	std::vector<int>	_vector;
	unsigned int		_size;

	void	validSpanException() const;

public:
	Span(unsigned int const & N);
	Span(Span const & src);
	~Span();

	Span & operator=(Span const & rhs);

	void	addNumber(int const & n);
	void	addNumber(sit start, sit end);
	int		shortestSpan();
	int		longestSpan() const;
	std::vector<int> getVector();
};

#endif
