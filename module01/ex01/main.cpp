/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:42:44 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 13:01:38 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int
	main(int argc, char **argv)
{
	int		carl_nbr = 24;
	int		zaz_nbr = 7;
	Zombie*	carl = zombieHorde(carl_nbr, "Carl");
	Zombie*	zaz = zombieHorde(zaz_nbr, "Zaz");

	for(int i = 0; i < carl_nbr; i++)
		carl[i].annonce();
	
	delete [] carl;

	for(int i = 0; i < zaz_nbr; i++)
		zaz[i].annonce();

	delete [] zaz;
	
	return (0);
}