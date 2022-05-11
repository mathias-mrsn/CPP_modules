/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:21:04 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/06 09:30:19 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int
main (int ac, char **av)
{
	std::cout << "\tClapTrap Tests" << std::endl << std::endl ;

	ClapTrap		*clap = new ClapTrap("John");

	std::cout << std::endl;

	clap->attack("joblux");

	clap->attack("UNKNOWN");
	clap->beRepaired(10);
	clap->takeDamage(100);
	clap->beRepaired(1000);

	std::cout << std::endl;
	delete clap;

	return (0);
}