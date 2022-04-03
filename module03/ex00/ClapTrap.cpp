/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:01:19 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/03 19:20:40 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) {}
ClapTrap::~ClapTrap (void) {}
ClapTrap::ClapTrap (const std::string& name) : _name(name) {}
ClapTrap::ClapTrap (const ClapTrap& ref)
{
	*this = ref;
}

ClapTrap&	operator=(const ClapTrap& ref)
{
	this->_name = ref._name;
	this->_hit_point = ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

void
attack (const std::string& str)
{
	std::cout << "attack" << std::endl;
}