/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:42:44 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 12:50:23 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int
	main(int argc, char **argv)
{
	Zombie*	carl = newZombie("Carl");
	Zombie*	zaz = newZombie("Zaz");

	carl->annonce();
	delete(carl);
	
	zaz->annonce();
	randomChump("George");
	delete(zaz);
	
	return (0);
}