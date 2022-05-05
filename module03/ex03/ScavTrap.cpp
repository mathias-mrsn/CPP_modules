/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:44:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/05 12:59:15 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void) :
	ClapTrap("UNKNOWN", 100, 50, 20)
{
	if (CPP_DEBUG) {std::cout << "ScavTrap default constructor called" << std::endl;}
	return;
}

ScavTrap::ScavTrap (const std::string& name) :
	ClapTrap(name, 100, 50, 20)
{
	if (CPP_DEBUG) {std::cout << "ScavTrap string constructor called" << std::endl;}
	return;
}

ScavTrap::ScavTrap (const ScavTrap& cpy)
{
	if (CPP_DEBUG) {std::cout << "ScavTrap copy constructor called" << std::endl;}
	*this = cpy;
}

ScavTrap::~ScavTrap (void)
{
	if (CPP_DEBUG) {std::cout << "ScavTrap default destructor called" << std::endl;}
	return;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	if (this == &ref) {return *this;}
	
	this->_name = ref._name;
	this->_hit_point = ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

void
ScavTrap::attack (const std::string& target)
{
	if (this->getEnergyPoint() < 1)
		std::cout << "ScavTrap " << this->getName() << " is out of energy!" << std::endl;
	else if (this->getHitPoint() < 1)
		std::cout << "ScavTrap " << this->getName() << " is dead!" << std::endl;
	else
	{
		std::cout << "ScavTrap "	<< this->getName()
									<< " attacks "
									<< target
									<< ", causing "
									<< this->getAttackDamage()
									<< " points of damage!"
									<< std::endl;
		this->_energy_point -= 1;
	}
}

void
ScavTrap::guardGate (void)
{
	std::cout << "ScavTrap " << this->getName() << " has entered in gate keeper mode!" << std::endl;
}