/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:21:04 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/05 12:57:51 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int
main (int ac, char **av)
{
	std::cout << "\tClapTrap Tests" << std::endl << std::endl ;

	ClapTrap		*clap = new ClapTrap("John");

	std::cout << std::endl;

	clap->attack("UNKNOWN");
	clap->beRepaired(10);
	clap->takeDamage(100);
	clap->beRepaired(1000);

	std::cout << std::endl;
	delete clap;

	std::cout << std::endl << "\tScavTrap Tests" << std::endl << std::endl ;

	ScavTrap		*scav = new ScavTrap("Leo");

	std::cout << std::endl;

	scav->attack("John");
	scav->takeDamage(10);
	scav->takeDamage(50);
	scav->beRepaired(5);
	scav->guardGate();

	std::cout << std::endl;
	delete scav;

	std::cout << std::endl << "\tFragTrap Tests" << std::endl << std::endl ;


	FragTrap		*frag = new FragTrap("Ken");

	std::cout << std::endl;

	frag->attack("Leo");
	frag->takeDamage(10);
	frag->highFivesGuys();
	frag->takeDamage(100);

	std::cout << std::endl;
	delete frag;

	return (0);
}