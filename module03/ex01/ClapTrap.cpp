/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:01:19 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 15:14:34 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) :
	_name("UNKNOWN"),
	_hit_point(10),
	_energy_point(10),
	_attack_damage(0) 
{
	if (CPP_DEBUG) {std::cout << "ClapTrap default constructor called" << std::endl;}
	return ;
}

ClapTrap::ClapTrap (const std::string& name, const int hp, const int ep, const int ad) :
	_name(name),
	_hit_point(hp),
	_energy_point(ep),
	_attack_damage(ad) 
{
	if (CPP_DEBUG) {std::cout << "ClapTrap complete constructor called" << std::endl;}
	return ;
}

ClapTrap::~ClapTrap (void)
{
	if (CPP_DEBUG) {std::cout << "ClapTrap default destructor called" << std::endl;}
	return ;
}

ClapTrap::ClapTrap (const std::string& name) : 
	_name((std::string&)name),
	_hit_point(10),
	_energy_point(10),
	_attack_damage(0) 
{
	if (CPP_DEBUG) {std::cout << "ClapTrap string constructor called" << std::endl;}
	return ;
}

ClapTrap::ClapTrap (const ClapTrap& ref)
{
	if (CPP_DEBUG) {std::cout << "ClapTrap copy constructor called" << std::endl;}
	*this = ref;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	if (this == &ref) {return *this;}


	this->_name = ref._name;
	this->_hit_point = ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

/*
	GETTERS SETTERS
*/

std::string	ClapTrap::getName (void) {return (this->_name);}
int			ClapTrap::getAttackDamage (void) {return (this->_attack_damage);}
int			ClapTrap::getHitPoint (void) {return (this->_hit_point);}
int			ClapTrap::getEnergyPoint (void) {return (this->_energy_point);}


void
ClapTrap::attack (const std::string& target)
{
	if (this->getEnergyPoint() < 1)
		std::cout << "ClapTrap " << this->getName() << " is out of energy!" << std::endl;
	else if (this->getHitPoint() < 1)
		std::cout << "ClapTrap " << this->getName() << " is dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap "	<< this->getName()
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
ClapTrap::takeDamage (uint32_t damage)
{
	if (!damage)
		std::cout << "Inflicting 0 damage is useless!" << std::endl;
	else if (this->getHitPoint() <= 0)
		std::cout << "ClapTrap " << this->getName() << " cannot take damage because it is dead!" << std::endl;
	else
	{
		if (this->getHitPoint() - (int)damage <= 0)
			damage = this->getHitPoint();
		this->_hit_point -= damage;
		if (!this->getHitPoint())
			std::cout << "ClapTrap " << this->getName() << " just lost the life!" << std::endl;
		else
			std::cout << "ClapTrap " << this->getName() << " just lost " << damage << " hit points!" << std::endl;
	}
}

void
ClapTrap::beRepaired (uint32_t amount)
{
	if (!amount)
		std::cout << "Repairing 0 hit points is useless!" << std::endl;
	else if (!this->getEnergyPoint())
		std::cout << "ClapTrap " << this->getName() << " is out of energy!" << std::endl;
	else if (this->getHitPoint() <= 0)
		std::cout << "ClapTrap " << this->getName() << " cannot be repaired because it is dead!" << std::endl;
	else
	{
		this->_hit_point += amount;
		std::cout << "ClapTrap " << this->getName() << " has been repaired of " << amount << " hit points!" << std::endl;
	}
}
