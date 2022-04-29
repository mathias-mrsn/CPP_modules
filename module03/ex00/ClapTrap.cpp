/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:01:19 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/29 15:15:46 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

# if !defined(CPP_DEBUG)
# define CPP_DEBUG 1
# endif

const int _default_hit_point = 10;
const int _default_energy_point = 10;
const int _default_attack_damage = 0;

ClapTrap::ClapTrap (void) : _name((std::string&)"UNKNOWN"),
							_hit_point(10),
							_energy_point(10),
							_attack_damage(0) 
{
	if (CPP_DEBUG) {std::cout << "ClapTrap default constructor called" << std::endl;}
	return ;
}

ClapTrap::~ClapTrap (void)
{
	if (CPP_DEBUG) {std::cout << "ClapTrap default destructor called" << std::endl;}
	return ;
}

ClapTrap::ClapTrap (const std::string& name) : 	_name((std::string&)name),
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
	std::cout << "Claptrap "	<< this->getName()
								<< " attacks "
								<< target
								<< ", causing "
								<< this->getAttackDamage()
								<< " points of damage!"
								<< std::endl;
}

void
ClapTrap::takeDamage (uint32_t damage)
{
	if (!damage)
	{
		std::cout << "useless" << std::endl;
		return;
	}
	if (this->getHitPoint() - damage <= 0)
		damage = this->getHitPoint();
	this->_hit_point -= damage;
	if (!this->getHitPoint())
		std::cout << "is dead" << std::endl;
	else
		std::cout << "lost n points" << std::endl;
}

void
ClapTrap::beRepaired (uint32_t amount)
{
	if (!amount)
	{
		std::cout << "useless" << std::endl;
		return;
	}
	if (this->getHitPoint() <= 0)
	{
		std::cout << "sorry but no" << std::endl;
		return;
	}
	if (this->getHitPoint() + amount > ClapTrap::_default_hit_point)
		amount = ClapTrap::_default_hit_point - amount;
	this->_hit_point += amount;
	if (this->getHitPoint() == ClapTrap::_default_hit_point)
		std::cout << "est full" << std::endl;
	else
		std::cout << "a gagne n points" << std::endl;
}
