/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:12:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/04 11:41:27 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria (void) : _type("none") {}
AMateria::AMateria (std::string const & type) : _type(type) {}
AMateria::AMateria (const AMateria& ref) {*this = ref;}

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
AMateria::use (ICharacter& target)
{}