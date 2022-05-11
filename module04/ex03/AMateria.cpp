/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:12:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/11 13:22:22 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

int AMateria::_index = 0;
AMateria* AMateria::_save[MAX_SIZE];

AMateria::AMateria (void) : _type("none")
{
	if (_index < MAX_SIZE) {_save[_index++] = this;}
}

AMateria::AMateria (std::string const & type) : _type(type)
{
	if (_index < MAX_SIZE) {_save[_index++] = this;}
}

AMateria::AMateria (const AMateria& ref)
{
	*this = ref;
	if (_index < MAX_SIZE) {_save[_index++] = this;}
}

AMateria::~AMateria (void) {}

AMateria&
AMateria::operator=(const AMateria& ref)
{
	if (this == &ref) {return *this;}

	this->_type = ref._type;
	return *this;
}

std::string const &
AMateria::getType (void) const
{
	return (this->_type);
}

void
AMateria::clean (void)
{
	for (int i = 0; i < MAX_SIZE; i++)
		if (_save[i])
			delete (_save[i]);
}

void
AMateria::use (ICharacter& target)
{}