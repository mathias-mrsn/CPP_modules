/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:19:04 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 16:22:40 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (void) :
	ClapTrap("UNKNOWN", 100, 50, 20)
{
	if (CPP_DEBUG) {std::cout << "FragTrap default constructor called" << std::endl;}
	return;
}

FragTrap::FragTrap (const std::string& name) :
	ClapTrap(name, 100, 50, 20)
{
	if (CPP_DEBUG) {std::cout << "FragTrap string constructor called" << std::endl;}
	return;
}

FragTrap::FragTrap (const FragTrap& cpy)
{
	if (CPP_DEBUG) {std::cout << "FragTrap copy constructor called" << std::endl;}
	*this = cpy;
}

FragTrap::~FragTrap (void)
{
	if (CPP_DEBUG) {std::cout << "FragTrap default destructor called" << std::endl;}
	return;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	if (this == &ref) {return *this;}
	
	this->_name = ref._name;
	this->_hit_point = ref._hit_point;
	this->_energy_point = ref._energy_point;
	this->_attack_damage = ref._attack_damage;
	return (*this);
}

void
FragTrap::highFivesGuys (void)
{
	std::cout << "FragTrap " << this->getName() << ": it's gonna be Legen-dary, HIGH FIVE!" << std::endl;
}