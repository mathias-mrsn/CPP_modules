/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:44:23 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 15:26:36 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (void) {
	return;
}

Weapon::Weapon (std::string str) : _type(str) {
	return ;
}

Weapon::~Weapon (void) {
	return;
}

std::string
	Weapon::getType(void) const
{
	return (this->_type);
}

void
	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}