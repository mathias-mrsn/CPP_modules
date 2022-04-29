/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:21:04 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/29 15:21:44 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int
main (int ac, char **av)
{
	ClapTrap clap ("John");
	ClapTrap fake (clap);
	ClapTrap empty;

	clap.attack("UNKNOWN");
	empty.takeDamage(5);
	empty.beRepaired(7);
	clap.beRepaired(10);
	empty.attack("John");
	empty.takeDamage(0);	

	return (0);
}