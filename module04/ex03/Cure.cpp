/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:27:23 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/04 12:45:25 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure (void) : AMateria("cure") {}
Cure::Cure (const Cure& ref) {*this = ref;}
Cure::~Cure (void) {}

Cure&	 Cure::operator=(const Cure& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

AMateria*
Cure::clone (void) const
{
	return (new Cure(*this));
}

void
Cure::use (ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


