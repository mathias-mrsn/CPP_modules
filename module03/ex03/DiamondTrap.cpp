/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:30:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 17:27:17 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (void) :
	ClapTrap("UNKNOWN_clap_name", 100, 50, 30),
	ScavTrap (),
	FragTrap (),
	name("UNKNOWN")
{
	if (CPP_DEBUG) {std::cout << "Diamond default constructor called" << std::endl;}
	return;
}

DiamondTrap::DiamondTrap (const DiamondTrap& ref)
{
	*this = ref;
	if (CPP_DEBUG) {std::cout << "Diamond copy constructor called" << std::endl;}
	return;
}

DiamondTrap::DiamondTrap (const std::string& name) :
	ClapTrap (name + "_clap_name", 100, 50, 30),
	ScavTrap (),
	FragTrap (),
	name(name)
{
	if (CPP_DEBUG) {std::cout << "Diamond string constructor called" << std::endl;}
	return;
}

DiamondTrap::~DiamondTrap (void)
{
	if (CPP_DEBUG) {std::cout << "Diamond default destructor called" << std::endl;}
	return;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
	if (this == &ref) {return *this;}

	this->ClapTrap::_name = ref.ClapTrap::_name;
	this->ClapTrap::_hit_point = ref.ClapTrap::_hit_point;
	this->ClapTrap::_attack_damage = ref.ClapTrap::_attack_damage;
	this->ClapTrap::_energy_point = ref.ClapTrap::_energy_point;
	this->name = ref.name;
	return (*this);
}

void
DiamondTrap::whoAmI() const
{
	std::cout << "Name :" << this->name << " ClapTrap name : "
		<< this->ClapTrap::_name << std::endl;
}

void
DiamondTrap::attack (const std::string& target)
{
	this->ScavTrap::attack (target);
}

