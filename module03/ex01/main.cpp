/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:21:04 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 15:18:26 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int
main (int ac, char **av)
{
	ClapTrap clap ("John");
	ClapTrap fake (clap);
	ScavTrap scav;

	clap.attack("UNKNOWN");
	clap.beRepaired(10);
	fake.takeDamage(100);
	scav.attack("clap");
	clap.beRepaired(1000);
	fake.takeDamage(4);
	fake.beRepaired(29);
	scav.guardGate();
	scav.attack("John");
	scav.beRepaired(4);
	scav.takeDamage(100);
	scav.takeDamage(50);
	scav.beRepaired(3);
	

	return (0);
}