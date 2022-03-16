/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:05:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 15:44:25 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &weapon) : _weapon(weapon), _name(name){
	return;
}

HumanA::~HumanA (void) {
	return;
}

void
	HumanA::attack(void) const {

	std::cout	<< this->_name
				<< " attacks with their "
				<< this->_weapon.getType()
				<< std::endl;
}

void
	HumanA::setWeapon(Weapon &weapon) {

	this->_weapon = weapon;
	return ;		
}