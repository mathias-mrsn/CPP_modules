/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:59:29 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 15:45:00 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _name(name) {
	return;
}

HumanB::~HumanB (void) {
	return;
}

void
	HumanB::attack(void) const {

	std::cout	<< this->_name
				<< " attacks with their "
				<< this->_weapon->getType()
				<< std::endl;
}

void
	HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
	return ;		
}