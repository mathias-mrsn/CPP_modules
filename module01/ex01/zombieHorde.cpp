/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:55:54 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 13:02:14 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*
	zombieHorde(int n, std::string name)
{
	Zombie*	ptr = new Zombie[n];

	for (int i = 0; i < n; i++)
		ptr[i].setName(name);
	return (ptr);
}