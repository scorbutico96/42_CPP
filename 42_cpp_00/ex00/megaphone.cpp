/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:19:47 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/02 15:19:48 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

static char
ft_upper(char c) {

	if (c >= 'a' && c <= 'z')
		return c - 32;
	return c;
}

int
main(int argc, char **argv) {

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return EXIT_FAILURE;
	}

	int	i = 1;
	int	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j]) {
			std::cout << ft_upper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
