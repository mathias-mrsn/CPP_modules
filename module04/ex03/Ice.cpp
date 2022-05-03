/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:44:50 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/03 11:58:59 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice (void) : AMateria("ice") {}
Ice::Ice (const Ice& ref) {*this = ref;}
Ice::~Ice (void) {}

Ice&	 Ice::operator=(const Ice& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

AMateria*
Ice::clone (void) const
{
	return (new Ice(*this));
}

void
Ice::use (ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << "[...]" << " *" << std::endl;
}
