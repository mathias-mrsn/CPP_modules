/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:43:49 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/14 11:54:41 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Scalar.hpp>
#include <cstdlib>

int
main (int ac, char **av)
{
	std::string		str;
	Conversion		*conv;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	str = av[1];
	conv = new Conversion(str);
	conv->print();

	delete conv;

	return (0);
}