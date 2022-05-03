/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:35:31 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/03 15:32:01 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (void) : _name((std::string&)"unamed") {}
Character::Character (const Character& ref) {*this = ref;}
Character::Character (const std::string name) : _name((std::string&)name) {}
Character::~Character (void) {}

Character& 	 Character::operator=(const Character& ref)
{
	if (this == &ref) {return *this;}

	for (int i = 0; i < NBR_MATERIA; i++)
		this->_tab[i] = ref._tab[i];
	this->_name = ref._name;
	return (*this);
}

std::string const&
Character::getName (void) const
{
	return (this->_name);
}

void
Character::equip (AMateria* m)
{
	for (int i = 0; i < NBR_MATERIA; i++)
	{
		
	}
}
